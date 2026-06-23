using System;
using System.Collections;

class Program
{
    static void Main()
    {
        BitArray votes = new BitArray(new bool[] { true, false, true, true, false, false, true, true });


        int yesVotes = 0;
        foreach (bool vote in votes)
        {
            if (vote) yesVotes++;
        }

        Console.WriteLine($"Yes Votes: {yesVotes} out of 8 ");
        Console.ReadKey();

    }

}