/*
Copyright (c) 2012 Boston University.
All rights reserved.
Permission is hereby granted, without written agreement and without
license or royalty fees, to use, copy, modify, and distribute this
software and its documentation for any purpose, provided that the above
copyright notice and the following two paragraphs appear in all copies
of this software.

IN NO EVENT SHALL BOSTON UNIVERSITY BE LIABLE TO ANY PARTY
FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF
BOSTON UNIVERSITY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

BOSTON UNIVERSITY SPECIFICALLY DISCLAIMS ANY WARRANTIES,
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE
PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND BOSTON UNIVERSITY HAS
NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
ENHANCEMENTS, OR MODIFICATIONS.
 */

package org.cidarlab.minieugene.symbol;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

import org.apache.commons.lang3.ArrayUtils;
import org.cidarlab.minieugene.exception.EugeneException;
import org.cidarlab.minieugene.fact.Fact;
import org.cidarlab.minieugene.predicates.Predicate;


/**
 * 
 * @author Ernst Oberortner
 */
public class SymbolTables {

	/*
	 * set of parts
	 * 
	 * we offer a predefined set of parts that
	 * the user can extend on-demand
	 * 
	 * predefined_symbols := {p, r, g, t}
	 * 
	 * p ... Promoter
	 * r ... RBS
	 * g ... Gene
	 * t ... Terminator
	 */
	private Map<Integer, Symbol> symbols;
	private Set<Predicate> predicates;
	

	/*
	 * N ... the length of the device
	 *       -1 ... random length
	 *       >0 ... length 
	 */
	public SymbolTables() {
		/*
		 * the symbols HashMap keeps track of all defined 
		 * symbols
		 * the predefined ones are: p, r, g, t
		 */
		this.symbols = new HashMap<Integer, Symbol>();
	
		this.predicates = new HashSet<Predicate>();
	}
	
	/* 
	 * put a symbol into the symbol tables
	 */
	public int put(String s) {
		return this.put(new Symbol(s));
	}
	
	public int put(Symbol s) {
		if(!containsId(s.getId())) {
			symbols.put(s.getId(), s);
		}
		return s.getId();
	}
	
	public void put(Predicate p) {
		this.predicates.add(p);
	}
	
	public Set<Predicate> getPredicates() {
		return this.predicates;
	}
	
	public boolean containsId(int i) {
		return this.symbols.containsKey(i);
	}
	
	public boolean contains(String s) {
		boolean b = this.symbols.containsValue(s);
		return b;
	}
	
	public Symbol get(int i) {
		return this.symbols.get(i);
	}
	
	public int[] getIds() {
		Integer[] ids = new Integer[this.symbols.keySet().size()];
		this.symbols.keySet().toArray(ids);
		return ArrayUtils.toPrimitive(ids);
	}
	
	public int getId(String s) {
		/*
		 * get b's id from the symbol
		 */

		if(this.symbols.containsValue(new Symbol(s))) {
			if(this.contains(s)) {
				for(Integer i : this.symbols.keySet()) {
					Symbol symbol = this.symbols.get(i);
					if(symbol.getName().equalsIgnoreCase(s)) {
						return i.intValue();
					}
				}
			}
		}

//		System.out.println("NEW SYMBOL -> "+new Symbol(s).toString());
		
		/*
		 * if the symbol does not exist, 
		 * then add it to the symbol tables
		 */
		return this.put(new Symbol(s));
	}
	
	public void print() {
		System.out.println("**** SYMBOLS ****");
		for(int i : this.symbols.keySet()) {
			System.out.println(i+" -> "+this.symbols.get(i));
		}
		System.out.println("**** PREDICATES ****");
		Iterator<Predicate> it = this.predicates.iterator();
		while(it.hasNext()) {
			System.out.println(it.next());
		}
	}
	
	/*
	 * methods to change the directionality of all symbols 
	 * or of a specific symbol
	 */
	public void allReverse() {
		for(int i : this.symbols.keySet()) {
			this.symbols.get(i).setForward(false);
		}
	}
	public void reverse(int a) {
		this.symbols.get(a).setForward(false);
	}
	public void allForward() {
		for(int i : this.symbols.keySet()) {
			this.symbols.get(i).setForward(true);
		}
	}
	public void forward(int a) {
		this.symbols.get(a).setForward(true);
	}

}
