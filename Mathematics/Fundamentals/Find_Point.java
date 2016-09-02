import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        for(int i=0;i<n;i++){
            int p1=scan.nextInt();
            int p2=scan.nextInt();
            int q1=scan.nextInt();
            int q2=scan.nextInt();
            System.out.print((2*q1-p1)+" "+(2*q2-p2)+"\n");
        }
    }
}
