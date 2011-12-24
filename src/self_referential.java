/**
 * @author huangyingw
 *
 */
public class self_referential {
	static int isSelfReferential(int a[]) {
		int count = 0;
		int len = a.length;
		for (int i = 0; i < len; i++) {
			count = 0;
			for (int j = 0; j < len; j++) {
				if (i == a[j])
					count++;
			}
			if (count != a[i]) {
				return 0;
			}
		}
		return 1;
	}

	public static void main(String arg[]) {
		int a[] = { 1, 2, 1, 0 };
		System.out.println(isSelfReferential(a));

		int b[] = { 2, 0, 2, 0 };
		System.out.println(isSelfReferential(b));

		int c[] = { 2, 1, 2, 0, 0 };
		System.out.println(isSelfReferential(c));

		int d[] = { 3, 2, 1, 1, 0, 0, 0 };
		System.out.println(isSelfReferential(d));

		int e[] = { 4, 2, 1, 0, 1, 0, 0, 0 };
		System.out.println(isSelfReferential(e));

		int f[] = { 5, 2, 1, 0, 0, 1, 0, 0, 0 };
		System.out.println(isSelfReferential(f));

		int g[] = { 6, 2, 1, 0, 0, 0, 1, 0, 0, 0 };
		System.out.println(isSelfReferential(g));

		int h[] = { 6, 2, 1, 0, 0, 0, 1, 0, 1, 0 };
		System.out.println(isSelfReferential(h));
		/*
		 * 1 1 1 1 1 1 1 0
		 */
	}
}
