import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        System.out.println(A.length() + B.length());
        if(A.compareTo(B) > 0) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
        String f = A.substring(0,1);
        String r = A.substring(1);
        A = f.toUpperCase() + r;
        f = B.substring(0,1);
        r = B.substring(1);
        B = f.toUpperCase() + r;
        System.out.println(A + " " + B);
    }
}
