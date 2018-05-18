package cass5;

import java.util.Scanner;

public class Reverse {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
String s;
Scanner scan=new Scanner(System.in);
s=scan.nextLine();
String arr[]=s.split(" ");
for (int i=0;i<arr.length;i++)
{
	StringBuilder s2=new StringBuilder(arr[i]);
	System.out.print(s2.reverse()+" ");
}
	}

}
