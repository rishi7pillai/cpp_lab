import java.util.*;

class Complex{
    int real,imag;
    public Complex(int real,int imag){
        this.real=real;
        this.imag=imag;
    }
    
    public Complex Add(Complex ob1,Complex ob2){
        Complex ob=new Complex(0,0);
        ob.real=ob1.real+ob2.real;
        ob.imag=ob1.imag+ob2.imag;
        ob = new Complex(ob.real,ob.imag);
        return ob;
    }
    
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int y=sc.nextInt();
        Complex ob1=new Complex(x,y);
        int a=sc.nextInt();
        int b=sc.nextInt();
        Complex ob2=new Complex(a,b);
        
        Complex ob3 =new Complex(0,0);
        ob3=ob3.Add(ob1,ob2);
        
        
    
        
        System.out.println(ob3.real+" + "+ob3.imag+"i");
        // System.out.println(ob2.real+" "+ob2.imag);
    }
}
