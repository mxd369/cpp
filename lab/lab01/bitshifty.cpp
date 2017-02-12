using System;

namespace bitShifting
{
    class Program
    {

        uint bitSize, shiftCount, mask, partionSize;

        void setValue(ref uint var, uint k, uint i, uint val)
        {

            bitSize = sizeof(uint) * 8;

            partionSize = (uint)(bitSize / k);
            shiftCount = partionSize * i;

            mask = (uint)~(((1 << (int)partionSize) - 1) << (int)shiftCount);
            var = var & mask;
            val = val << (int)shiftCount;
            var = var | val;

        }
        uint getValue(uint var, uint k, uint i)
        {
            bitSize = sizeof(uint) * 8;

            partionSize = (bitSize / k);
            shiftCount = partionSize * i;

            mask = (uint)(((1 << (int)partionSize) - 1) << (int)shiftCount);
            var = var & mask;
            var = (var >> (int)shiftCount);
            return var;
        }

        static void Main(string[] args)
        {
            Program p = new Program();

            uint k;
            uint value;
            uint maxValue;

            uint var = 0;

            Console.WriteLine("C++ Lab to C#, Practice Using Pass by Ref");

            Console.WriteLine("Valid Partition K size are: 1, 2, 4, 8, 16, 32.");
            Console.WriteLine("Enter Partition Size");

            k = Convert.ToUInt32(Console.ReadLine());

            maxValue = (uint)((1 << (int)(sizeof (uint) * 8 / k)) - 1);

            if(k == 1)
            {
                maxValue = 2147483647;
            }
            Console.WriteLine("Maximal Value for Partion of Size {0} is 0 to {1}", k, maxValue);


            bool getValue = true;
            for(uint i = 0; i < k; i++)
            {
                Console.WriteLine("Input a Value");
                value = Convert.ToUInt32(Console.ReadLine());

                if (k == 1)
                {
                    Console.WriteLine("Value at Index 0 is: {0}", value);
                    getValue = false;
                }
                else
                {
                    p.setValue(ref var, k, i, value);
                }
            }

            for(uint i = 0; i < k; i++)
            {
                if (getValue)
                {
                    value = p.getValue(var, k, i);
                        Console.WriteLine("Value At Index {0} is: {1}", i, value);   
                }
            }

        }
    }
}