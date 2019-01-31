//Compile by mcs Hello.cs

using System;

class Hello{
    public static void Main(){
	    
        string name;

	Console.WriteLine("What is your name?\n");
    	name = Console.ReadLine();
    	Console.WriteLine("Hello, {0}. Have a great day.", name );
    }
}
