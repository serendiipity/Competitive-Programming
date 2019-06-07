/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		BigDecimal PI = new BigDecimal(Double.toString(Math.PI));
		PI = PI.setScale(n, RoundingMode.HALF_UP);
		System.out.println(PI);
	}
}