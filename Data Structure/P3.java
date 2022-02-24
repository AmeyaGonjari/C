import java.util.*;

class P3
{
	public static void main(String args[])
	{

		Marvellous  iobj = new Marvellous();
		iobj.Accept();
		iobj.MAR();

	}



}

class Input
{
	int iNo;

		int	arr[];
		
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the number of Elements :");
		iNo = sobj.nextInt();

		int	arr[];
		arr =  new int[iNo];

		System.out.println("Enetr Elements:");
		for(int i = 0; i<arr.length;i++ )
		{	

			arr[i] = sobj.nextInt();

		}


			for(int j = 0 ; j<arr.length ;  j++)
			{	

				System.out.println(arr[j]);
			}


	}
	
}

class Marvellous extends Input
{
	public void MAR()
	{
			int Brr[] = arr;
		System.out.println(Brr.length);
	
	}

}
