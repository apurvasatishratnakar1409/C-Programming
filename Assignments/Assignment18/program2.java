class Logic
{
    public void PrintEvenNumber(int iNo)
    {
        int iCnt=0;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iCnt%2==0)
            {
                System.out.println(iCnt);
            }
        }
        
    }
}
class program2
{
    public static void main(String args[])

    {
        Logic lobj=new Logic();
        lobj.PrintEvenNumber(20);

    }

}
