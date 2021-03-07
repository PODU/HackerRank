import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
                String num = ("000" + String.valueOf(x)).substring(String.valueOf(x).length());
                //Complete this line
                s1 = s1.format("%-15s%3s", s1, num);
                System.out.println(s1);
            }
            System.out.println("================================");

    }
}




