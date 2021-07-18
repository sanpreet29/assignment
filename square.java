class square
{

	static float sq(int number,int precision)
	{
		int start=0,end=number,mid=0;
		double ans=0.0;
		

		while(start<=end)
		{ 
			mid=(start+end)/2;

			if(mid*mid==number)
			{
				ans=mid;
				break;
			}

			else if(mid*mid<number)
			{
				start=mid+1;
				ans=mid;
			}
			else
			{
				end=mid-1;
			}
		}
		double inc=0.1;
		for(int i=0;i<precision;i++)
		{
			while(ans*ans<=number)
			{
				ans=ans+inc;
			}
			ans=ans-inc;
			inc=inc/10;
		}
		return (float)ans;
	}

	public static void main(String[] args)
	{
		System.out.println(sq(10,4));
		System.out.println(sq(50,3));
	}
}