package org.cidarlab.eugene.rules.tree.predicate;

import java.util.List;

import org.cidarlab.eugene.rules.LogicalOperator;

import eugene.dom.components.Component;
import eugene.exception.EugeneException;

import JaCoP.constraints.Constraint;
import JaCoP.constraints.PrimitiveConstraint;
import JaCoP.constraints.XeqC;
import JaCoP.core.IntVar;
import JaCoP.core.Store;

public class LogicalAnd 
	implements LogicalPredicate {
	
	private Predicate A;
	private Predicate B;
	
	public LogicalAnd(Predicate A, Predicate B) {
		this.A = A;
		this.B = B;
	}
	
	public Predicate getA() {
		return this.A;
	}

	public Predicate getB() {
		return this.B;
	}
	
	@Override
	public String getOperator() {
		return LogicalOperator.AND.toString();
	}

	@Override
	public String toString() {
		StringBuilder sb = new StringBuilder();
		sb.append(this.getA()).append(" AND ").append(this.getB());
		return sb.toString();
	}

	@Override
	public Constraint toJaCoP(Store store, List<Component> components, IntVar[] variables) {
		
		if(this.getA() instanceof CountingPredicate && 
				this.getB() instanceof CountingPredicate) {
			
			store.impose(this.getA().toJaCoP(store, components, variables));
			store.impose(this.getB().toJaCoP(store, components, variables));

			// in this case, we return an ``always true'' constraint
			IntVar iv = new IntVar(store, "tmp", -1, -1);
			return new XeqC(iv, -1);
		} else if(this.getA() instanceof CountingPredicate && 
				!(this.getB() instanceof CountingPredicate)) {

			store.impose(this.getA().toJaCoP(store, components, variables));
			return this.getB().toJaCoP(store, components, variables);
			
		} else if(this.getB() instanceof CountingPredicate && 
				!(this.getA() instanceof CountingPredicate)) {
			
			store.impose(this.getB().toJaCoP(store, components, variables));
			return this.getA().toJaCoP(store, components, variables);
			
		} else {
			
			return new JaCoP.constraints.And(
					(PrimitiveConstraint)this.getA().toJaCoP(store, components, variables), 
					(PrimitiveConstraint)this.getB().toJaCoP(store, components, variables));			
		}
	}

	@Override
	public boolean evaluate(long[] l) 
			throws EugeneException {
		boolean b = this.getA().evaluate(l);
		if(b) {
			b = b && this.getB().evaluate(l);
		}
		return b;
	}

}
