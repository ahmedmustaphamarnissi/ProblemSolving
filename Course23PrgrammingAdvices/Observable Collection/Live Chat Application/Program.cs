using System;
using System.Collections.ObjectModel;
using System.Collections.Specialized;

class Program
{
    static void Main()
    {
        ObservableCollection<KeyValuePair<string,string>> tasks = new ObservableCollection<KeyValuePair<string, string>>();
        tasks.CollectionChanged += (sender, e) =>
        {
            if (e.Action == NotifyCollectionChangedAction.Add)
            {
                KeyValuePair<string, string> tempnew = (KeyValuePair <string,string>)e.NewItems[0];
                Console.WriteLine($"{tempnew.Key} :  {tempnew.Value}");
            }
        };

        tasks.Add(new KeyValuePair<string, string>("Ahmed","good Content"));
        tasks.Add(new KeyValuePair<string, string>("Mustapha", "I Like This"));
        Console.ReadKey();
    }
}
