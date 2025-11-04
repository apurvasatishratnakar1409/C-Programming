class Logic
{
    public void PrintReverse(int iNo)
    {
        int iCnt=0;
        for(iCnt=iNo;iCnt>=1;iCnt--)
        {
             System.out.println("printing N Down to 1 :"+iCnt);
        }
        
           
    }
}
class program2

{
    public static void main(String args[])

    {
        Logic lobj=new Logic();
        lobj.PrintReverse(10);

    }

}
