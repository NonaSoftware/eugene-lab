package org.cidarlab.eugene.rules.tree.predicate;

import java.util.Arrays;
import java.util.List;

import org.apache.commons.lang3.ArrayUtils;
import org.cidarlab.eugene.rules.RuleOperator;

import JaCoP.constraints.Constraint;
import JaCoP.constraints.XeqC;
import JaCoP.constraints.XeqY;
import JaCoP.core.IntVar;
import JaCoP.core.Store;

import eugene.cache.SymbolTables;
import eugene.dom.components.Component;
import eugene.exception.EugeneException;

/*
 * ? STARTSWITH B
 * 
 * ? ... the long[] array that the evaluate() method receives
 * B ... the component that must be at the first position of X
 */
public class StartsWith 
	extends UnaryPredicate {

	public StartsWith(long A, long B) 
			throws EugeneException {
		super(A, B);
	}
	
	public StartsWith(long B) 
			throws EugeneException {
		super(B);
	}
	
	@Override
	public boolean evaluate(long[] l) {
		return l[0]==this.getB();
	}
	
	@Override
	public boolean evaluate() 
			throws EugeneException {
		if(-1 == this.getA()) {
			throw new EugeneException("The STARTSWITH rule requires a left-hand-side rule operand!");
		}
		return this.evaluate(SymbolTables.getDeviceComponentIds(this.getA()));
	}

	@Override
	public boolean evaluate(long n) 
			throws EugeneException {
		return this.evaluate(SymbolTables.getDeviceComponentIds(n));
	}

	@Override
	public boolean evaluate(String sDeviceName) 
			throws EugeneException {
		return this.evaluate(SymbolTables.getDeviceComponentIds(sDeviceName));
	}

	@Override
	public String getOperator() {
		return RuleOperator.STARTSWITH.toString();
	}
	
	@Override
	public String toString() {
		StringBuilder sb = new StringBuilder();
		if(this.getA() != -1) {
			sb.append(this.getA()).append(" ");
		}
		sb.append(RuleOperator.STARTSWITH).append(" ").append(this.getB());
		return sb.toString();
	}


	@Override
	public Constraint toJaCoP(
			Store store, List<Component> components, IntVar[] variables) {
		return new XeqC(variables[0], (int)this.getB());
	}

}