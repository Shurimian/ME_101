using System;
using System.IO;
using System.IO.Ports;
using System.Threading;
using System.Text;
using System.Collections.Generic;

namespace Pls_Work_Arduino
{
	class Program
	{
		static void Main(string[] args)
		{
			SerialPort mySerialPort = new SerialPort("COM3", 9600);

			try
			{
				mySerialPort.Open();
				/*
				byte b = (byte)mySerialPort.ReadByte();
				char c = (char)mySerialPort.ReadChar();
				string line = mySerialPort.ReadLine();
				string all = mySerialPort.ReadExisting();

				Console.WriteLine("Byte: " + b);
				Console.WriteLine("Char: " + c);
				Console.WriteLine("Line: " + line);
				Console.WriteLine("All: " + all);
				*/
				mySerialPort.Close();
			}
			catch (IOException ex)
			{
				Console.WriteLine(ex);
			}
		}
	}
}
