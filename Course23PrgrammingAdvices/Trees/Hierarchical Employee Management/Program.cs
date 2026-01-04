using System;
using System.Collections.Generic;


class EmployeeNode
{
    public string Name { get; set; } // Employee's name
    public string Position { get; set; } // Employee's position
    public List<EmployeeNode> Subordinates { get; set; } = new List<EmployeeNode>(); // List of subordinates


    public EmployeeNode(string name, string position)
    {
        Name = name;
        Position = position;
    }


    public void Print(string indent = "")
    {
        Console.WriteLine($"{indent}{Position}: {Name}"); // Print the current employee's position and name
        foreach (var subordinate in Subordinates)
        {
            subordinate.Print(indent + "  "); // Recursively print subordinates
        }
    }
    public int CalculateDiractorySize(int size=1)
    {
        if (Subordinates.Count == 0)
            size += 1;
        else
            size += Subordinates.Count;

        foreach(var child in Subordinates)
        {
            return child.CalculateDiractorySize(size);
        }
        return size;
    }
}


class Program
{
    static void Main(string[] args)
    {
        // Create the CEO
        var ceo = new EmployeeNode("Alice", "CEO");


        // Create VP and Manager under the CEO
        var vp = new EmployeeNode("Bob", "VP of Marketing");
        var manager = new EmployeeNode("Charlie", "Marketing Manager");


        vp.Subordinates.Add(manager); // Add the manager under the VP
        ceo.Subordinates.Add(vp); // Add the VP under the CEO


        vp = new EmployeeNode("Lara", "VP of Technology");
        manager = new EmployeeNode("Tom", "Architect");


        vp.Subordinates.Add(manager); // Add the manager under the VP
        ceo.Subordinates.Add(vp); // Add the VP under the CEO




        // Display the company hierarchy
        Console.WriteLine("Company Hierarchy:");
        ceo.Print();
        Console.WriteLine(ceo.CalculateDiractorySize());

        // Pause the screen
        Console.ReadKey();
    }
}