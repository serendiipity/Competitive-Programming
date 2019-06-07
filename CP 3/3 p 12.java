/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.time.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scanner = new Scanner(System.in);
		int day = scanner.nextInt();
		String m = scanner.next().toUpperCase();
		int month = Month.valueOf(m).getValue();
		int year = scanner.nextInt();
		Calendar calendar = Calendar.getInstance();
		calendar.set(year, month + 1, day + 1); // +1 because GregorianCalendar's enums are off by 1
		day = calendar.get(Calendar.DAY_OF_WEEK);
		String dayOfWeek = DayOfWeek.of(day).toString().toLowerCase();
		dayOfWeek = capitalize(dayOfWeek);
		System.out.println(dayOfWeek);
	}
	
	public static String capitalize(String string) {
		String s = "";
		s += string.substring(0, 1).toUpperCase() + string.substring(1);
		return s;
	}
}