package org.cidarlab.minieugene.predicates.direction;

import org.cidarlab.minieugene.MiniEugene;
import org.cidarlab.minieugene.exception.EugeneException;
import org.cidarlab.minieugene.rules.RuleOperator;
import org.cidarlab.minieugene.symbol.SymbolTables;

import JaCoP.constraints.Constraint;
import JaCoP.core.IntVar;
import JaCoP.core.Store;

/*
 * SOME_REVERSE a
 * 
 * X := the set of all symbols (defined by the user)
 * a element_of X
 * exists a : direction(a) = '-'
 */
public class SomeReverse 
	extends DirectionalityPredicate {

	public SomeReverse(SymbolTables symbols, int a) {
		super(symbols, a);
	}

	@Override
	public String getOperator() {
		return RuleOperator.SOME_REVERSE.toString();
	}
	
	@Override
	public String toString() {
		StringBuilder sb = new StringBuilder();
		sb.append(RuleOperator.SOME_REVERSE);
		return sb.toString();
	}

	@Override
	public Constraint toJaCoP(Store store, IntVar[] variables) 
				throws EugeneException {
		MiniEugene.SOME_REVERSE_RULE = true;
		return null;
	}

	@Override
	public Constraint toJaCoPNot(Store store, IntVar[] variables)
			throws EugeneException {
		return null;
	}

}
