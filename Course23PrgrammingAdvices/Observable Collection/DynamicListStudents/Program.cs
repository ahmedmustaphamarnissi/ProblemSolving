using System;
using System.Collections.ObjectModel;
using System.Collections.Specialized;

class Program
{
    static void Main()
    {
        ObservableCollection<string> students = new ObservableCollection<string>();

        students.CollectionChanged += (sender, e) =>
        {
            //this event will be fired on any change (add or remove.

            if (e.Action == NotifyCollectionChangedAction.Add)
                Console.WriteLine($"New Student Added: {e.NewItems[0]}");
            if (e.Action == NotifyCollectionChangedAction.Remove)
                Console.WriteLine($"Student Removed: {e.OldItems[0]}");

        };

        students.Add("Alice");
        students.Add("Bob");
        students.Remove("Alice");
        // Output:
        // New Student Added: Alice
        // New Student Added: Bob
        // Student Removed: Alice
        Console.ReadKey();
    }
}

