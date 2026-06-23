using System;
using System.Collections.Generic;


class Program
{
    static void Main()
    {
        // Initialize a queue to represent vehicles at the traffic signal
        Queue<int> Tickets = new Queue<int>();
        int StartIndex = 101;

        Console.Write("How Many Ticket We Have : ");
        int NumberOfTickets = Convert.ToInt32(Console.ReadLine());

        while (NumberOfTickets-- >0)
        {
            string Ticket = "Ticket " + StartIndex.ToString();
            Tickets.Enqueue(StartIndex);
            Console.WriteLine($"{Ticket} issued.");
            StartIndex++;
        }

        Console.WriteLine("Ticketing System Simulation Started...\n");

        while (Tickets.Count > 0)
        {
            // Process the vehicle at the front of the queue
            Console.WriteLine($"Processing Ticket : {Tickets.Dequeue()}");


            // Display the remaining vehicles
            if (Tickets.Count > 0)
            {
                Console.WriteLine("Remaining Tickets: " + string.Join(", ", Tickets));
            }
            else
            {
                Console.WriteLine("No more Tickets in the queue.");
            }


            Console.WriteLine();
        }


        Console.WriteLine("Ticketing System Simulation Ended.");
        Console.ReadKey();
    }
}