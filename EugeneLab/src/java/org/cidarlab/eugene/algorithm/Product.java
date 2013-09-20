package org.cidarlab.eugene.algorithm;

import org.cidarlab.eugene.cache.SymbolTables;
import org.cidarlab.eugene.dom.arrays.DeviceArray;
import org.cidarlab.eugene.exception.EugeneException;

public class Product {

	public static DeviceArray product(String sDeviceName, long N) 
			throws EugeneException {
		
//		System.out.println("[Product.product] -> "+sDeviceName+", "+N);
		return SymbolTables.product(sDeviceName, N);
		
	}
	
}