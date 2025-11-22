using System;
using System.Collections.ObjectModel;
using System.Collections.Specialized;

class Program
{
    static void Main()
    {
        ObservableCollection<KeyValuePair<string,float>> Stock = new ObservableCollection<KeyValuePair<string, float>>();
        Stock.CollectionChanged += (sender, e) =>
        {
            if (e.Action == NotifyCollectionChangedAction.Add)
                Console.WriteLine($"Item Added to Stock: {e.NewItems[0].ToString()}");
            if (e.Action == NotifyCollectionChangedAction.Remove)
                Console.WriteLine($"Item Removed from Stock: {e.OldItems[0].ToString()}");
        };

        Stock.Add(new KeyValuePair<string, float>("Mouse", 50));
        Stock.Add(new KeyValuePair<string, float>("KeyBord", 200));
        var item = Stock[0];
        Stock.Remove(item);
        // Output:
        // Item Added to Cart: Laptop
        // Item Added to Cart: Mouse
        // Item Removed from Cart: Mouse
        Console.ReadKey();
    }
}
