
using System;
using System.Collections;

class Program
{
    static void Main()
    {
        Hashtable hashtable1 = new Hashtable
        {
            { "Name", "Alice" },
            { "Age", 25 }
        };

        Hashtable hashtable2 = new Hashtable(hashtable1);

        Console.WriteLine("Contents of copied Hashtable:");
        foreach (DictionaryEntry entry in hashtable2)
        {
            Console.WriteLine($"Key: {entry.Key}, Value: {entry.Value}");
        }

        Console.WriteLine("Press any key to exit...");
        Console.ReadKey();
    }
}
