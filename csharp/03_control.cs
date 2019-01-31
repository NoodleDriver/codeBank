//Compile by mcs Hello.cs

using System;

class Hello{
    public static void Main(){

        int select;

	Console.WriteLine("select a number");
    	select = Convert.ToInt32(Console.ReadLine());

   	if(select == 0){
      		Console.WriteLine("If. Select = 0");
   	}
   	else if(select < 2){
       		Console.WriteLine("else If. Select < 2");
   	}
   	else{
       		Console.WriteLine("else");
   	}

   	switch(select){

       		case 0:
        		Console.WriteLine("switch. Select = 0");
       		break;

       		case 1:
        		Console.WriteLine("switch. Select = 1");
       		break;

      		 default:
        		Console.WriteLine("switch. Select = default");
       		break;
   	}

   	while(select > 0){
       		Console.WriteLine("while select > 0; select = {0}", select);
       		select--;
   	}

   	for(int i = 0; i < 5; i++){
       		Console.WriteLine("for. i = {0}", i);
  	 }
    }
}
