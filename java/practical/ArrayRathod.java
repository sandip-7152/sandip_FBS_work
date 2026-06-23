class ArrayRathod {
	public static void main (String[]args){
	int[] arr;
	arr = new int[5];
	for(int i=1;i<arr.length;i++)
	System.out.println(arr[i]);

	Emp[] brr=new Emp[5];
	//array of references
	//which has null at all the
	//araay locations

	
	for(int i=0;i<brr.length;i++)
	System.out.println(brr[i]);
	//above code prints 5 times null
		


	for(int i=0;i<brr.length;i++)
	brr[i].display();
	//this gives nullpointerException


	//what shoud we do >>
	brr[0]=new Emp();
	brr[1]=newEmp(101,"sandip",29322);//parameterized

	//and so on
	}
}