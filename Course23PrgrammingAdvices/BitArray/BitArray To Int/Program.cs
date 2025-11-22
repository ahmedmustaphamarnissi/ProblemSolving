using System;
using System.Collections;

class Program
{
    static int BitArrayToInt(BitArray bits)
    {
        int result = 0;
        for (int i = 0; i < bits.Length; i++)
        {
            if (bits[i])
            {
                result += (1 << i); // Add the value of the current bit
            }
        }
        return result;
    }

    static void Main()
    {
        BitArray bits = new BitArray(new bool[] { true, false, true }); // Binary: 101
        int number = BitArrayToInt(bits);
        Console.WriteLine("Integer value of BitArray: " + number);

        Console.WriteLine("Press any key to exit...");
        Console.ReadKey();
    }
}