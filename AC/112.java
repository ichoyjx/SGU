import java.math.*;
import java.util.*;

public class oneonetwo
{
   public static void main(String[] args)
   {
      Scanner in = new Scanner(System.in);
      int a = in.nextInt();
      int b = in.nextInt();

      BigInteger A=BigInteger.valueOf(a);
      BigInteger B=BigInteger.valueOf(b);
      BigInteger rA=BigInteger.valueOf(a);
      BigInteger rB=BigInteger.valueOf(b);

      for(int i=1; i<b; i++)
          rA=rA.multiply(A);
      for(int i=1; i<a; i++)
          rB=rB.multiply(B);
      System.out.println(rA.subtract(rB));
   }
}