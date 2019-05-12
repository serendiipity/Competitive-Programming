/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.text.*;
import java.time.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{	
		int p;
		Scanner scanner = new Scanner(System.in);
		while (true) {
			p = scanner.nextInt();
			int d, m, y;
			d = scanner.nextInt();
			if (d == 0)
				return;
			m = scanner.nextInt();
			y = scanner.nextInt();
			
			Calendar calendar = Calendar.getInstance();
			calendar.set(y, m-1, d);
			calendar.add(Calendar.DAY_OF_YEAR, p);
			System.out.println(Integer.toString(calendar.get(Calendar.DAY_OF_MONTH)) + ' ' 
			+ Integer.toString(calendar.get(Calendar.MONTH) + 1) + ' ' + 
			Integer.toString(calendar.get(Calendar.YEAR)));
		}
	}
}