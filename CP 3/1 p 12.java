/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	
	// read doubles and echo them with a minimum field width of 7 and 3 digits after the decimal pt
	public static void main (String[] args) throws java.lang.Exception
	{
		int n; 
		Scanner scanner = new Scanner(System.in);
		n = scanner.nextInt();
		double d;
		while (n-- > 0) 
		{ 
			d = scanner.nextDouble();
			String s = String.format("%7.3f", d);
			System.out.println(s);
		}
		
	}
}