class Logic
{
    public void checkSign(int iNo)
    {
        if(iNo>0)
        {
            System.out.println("Number is Positive");
        }
        else if(iNo<0)
        {
            System.out.println("Number is Negative");

        }
        else
        {
            System.out.println("Number is Zero");

        }

    }
}
class program5
{
    public static void main(String args[])

    {
        Logic lobj=new Logic();
        lobj.checkSign(-8);

    }

}
