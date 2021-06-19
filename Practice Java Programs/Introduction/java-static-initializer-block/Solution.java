import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

static boolean flag = false;
static int B, H;
static {
    try{
        Scanner sc = new Scanner(System.in);
        B = sc.nextInt();
        H = sc.nextInt();
        if(B <= 0 || H <= 0){
            throw new Exception();
        } else {
            flag = true;
        }
    } catch (Exception e) {
        System.out.println("java.lang.Exception: Breadth and height must be positive");
    }   
}

public static void main(String[] args){
		if(flag){
			int area=B*H;
			System.out.print(area);
		}
		
	}//end of main

}//end of class


