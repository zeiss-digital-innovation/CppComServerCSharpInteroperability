using System;
using ComServerLib;

namespace CSClient
{
    class Program
    {
        static void Main(string[] args)
        {
            IComServerMgr mgr = new ComServerMgr();
            var x = mgr.AddOne(3);

            Console.WriteLine("Hello World!");
        }
    }
}
