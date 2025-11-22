using System;
using System.Collections;

class Program
{
    static void Main()
    {
        string Password = "Ahmed!19112005";
        BitArray Strenght = new BitArray(4 , false);
        // index 0 upper case
        // index 1 lower case
        // index 2 degit
        // index 3 special char

        char[] SpecialChar = new char[] { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')' };
        for (int i = 0; i < Password.Length; i++)
        {
            if (char.IsDigit(Password[i])) Strenght[2] = true;
            if (char.IsUpper(Password[i])) Strenght[0] = true;
            if (char.IsLower(Password[i])) Strenght[1] = true;
            if (SpecialChar.Contains(Password[i])) Strenght[3] = true;
        }
        
        Console.WriteLine("Is there a Upper Case : " + Strenght[0]);
        Console.WriteLine("Is there a Lower Case : " + Strenght[1]);
        Console.WriteLine("Is there a  Degit : " + Strenght[2]);
        Console.WriteLine("Is there a Special Char : " + Strenght[3]);

        Console.ReadKey();
    }

}