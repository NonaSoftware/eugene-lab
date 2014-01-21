package org.cidarlab.eugene.rules;

import org.cidarlab.minieugene.MiniEugene;
import org.cidarlab.minieugene.MiniEugeneFactory;
import org.cidarlab.minieugene.MiniEugeneReturn;
import org.cidarlab.minieugene.constants.EugeneConstants;

public class WithEvaluator {

	private static final int MAX_DESIGN_SIZE = 10; 
	private static final int NUMBER_OF_RUNS = 20; 
	
	public void evaluate() {
		double[] all_times = new double[MAX_DESIGN_SIZE];
		double[] times = new double[NUMBER_OF_RUNS];
		
		all_times[0] = 0;
		for(int i=2; i<=MAX_DESIGN_SIZE; i++) {
			all_times[i-1] = 0;
			
			System.out.println("*** i: "+i);
			String s=buildScript(i);
			
			for(int k = 0; k < NUMBER_OF_RUNS; k++) {
				
				try {
					MiniEugene me = MiniEugeneFactory.instantiate();				
					MiniEugeneReturn mer = me.execute(s,  i, -1);
//					MiniEugene me = new MiniEugene(i, -1, false);
//					MiniEugeneReturn mer = me.execute(s);
					
//					System.out.println(
//							mer.getStatistics().getValueByKey(EugeneConstants.NUMBER_OF_SOLUTIONS)+" -> "+
//							mer.getStatistics().getValueByKey(EugeneConstants.SOLUTION_FINDING_TIME));
					
					times[k] = mer.getStatistics().getValueByKey(EugeneConstants.SOLUTION_FINDING_TIME);
					
					mer = null;
					me = null;
					
					System.gc();
					
				} catch(Exception e) {
					e.printStackTrace();
				}
				
			}
			
			all_times[i-1] = calculate_average(times);
		}
		
		rPlot(all_times);
	}
	
	private void rPlot(double[] array) {
		String NEWLINE = System.getProperty("line.separator");
		
		StringBuilder x = new StringBuilder();
		x.append("x=c(");
		StringBuilder y = new StringBuilder();
		y.append("y=c(");
		
		for(int i=0; i<array.length-1; i++) {
			x.append((i+1)).append(",");			
			y.append(array[i]).append(",");			
		}
		
		x.append(array.length).append(");").append(NEWLINE);
		y.append(array[array.length-1]).append(");").append(NEWLINE);
		
		System.out.print(x.toString());
		System.out.print(y.toString());
	}
	
	private double calculate_average(double[] array) {
		double sum = 0.0;
		
		int k=0;
		for(int i=0; i<array.length; i++) {
			sum += array[i];
			
			if(i>=10) {
				k++;
			}
		}
		
		return sum/k;
	}
	public String buildScript(int N) {
		String NEWLINE = System.getProperty("line.separator");
		
		StringBuilder sb = new StringBuilder();
		for(int i=1; i<N; i++) {
			sb.append(i).append(" WITH ").append(i+1).append(NEWLINE);
		}
		return sb.toString();
	}
	
	public static void main(String[] args) {
		WithEvaluator we = new WithEvaluator();
		we.evaluate();
	}
}
