package com.ut;

public class example {
	public static void main(String[] args) {
	  UT_RAS dut = new UT_RAS();
	  for(int i = 0; i<10; i++){
		dut.step();
	  }
	  dut.xFinalize();
	  System.out.println("Step RAS 10 times complete");
	}
}
