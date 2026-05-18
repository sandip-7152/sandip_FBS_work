class Largest{
	public static void main (String[]args){
	int arr[] = {12,23,32,21,123,32};
	int lar = arr[0];
	int slar = arr[0];
	for(int i=0;i<arr.length;i++){
	if(arr[i]>lar){
	
	slar = arr[i];
	lar =arr[i];
	}
else if(arr[i] >slar && arr[i] !=lar){
	slar =arr[i];
	}
}
	System.out.println("second largest number" + slar);
	}
}
