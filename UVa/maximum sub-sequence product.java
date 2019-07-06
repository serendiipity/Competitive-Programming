import java.util.*;
import java.math.BigInteger;

class Main {
  	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n;
		Vector <Integer> v = new Vector<>();
		while (scanner.hasNextInt()) {
			n = scanner.nextInt();
			if (n == -999999) {
				BigInteger m = BigInteger.valueOf(Integer.MIN_VALUE);
				for (int i = 0; i < v.size(); i++) {
					for (int j = i; j < v.size(); j++) {
						BigInteger product = BigInteger.valueOf(1);
						for (int k = i; k <= j; k++) {
							BigInteger p = BigInteger.valueOf(v.get(k).intValue());
							product = product.multiply(p);
						}
						m = m.max(product);
					}
				}
				System.out.println(m); 
				v.clear();
			} else {
				v.add(n);
			}
		
		}
  	}
}