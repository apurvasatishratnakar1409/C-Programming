class Logic
{
    public void CeckEvenOdd(int iNo)
    {
       
            if(iNo%2==0)
            {
                System.out.println("Number is Even");

            }
            else
            {
                System.out.println("Number is Odd");

            }
           
        
    }

}
class Program2
{
    public static void main (String arge[])
    {
        Logic Lobj=new Logic();
        Lobj.CeckEvenOdd(7);

    }
}
