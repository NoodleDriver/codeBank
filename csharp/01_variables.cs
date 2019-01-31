using System;

class Hello{
    public static void Main(){

        string name = "Boris";
        int age = 30;
        double height = 6.1;
        char grade = 'A';
	    
	Console.WriteLine("There was a man called {0}.", name);
    	Console.WriteLine("He was {0} years old.", age);
    	Console.Write("He was {0} foot tall and ", height);
    	Console.WriteLine("Scored an {0} on the test.", grade);
    }
}
