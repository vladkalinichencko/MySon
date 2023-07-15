#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;
using namespace System::IO;

ref class Class
{
public:
	Class();

	void fst (String^ sd, String^ cd)
	{
		StreamWriter^ p = gcnew StreamWriter(sd);
		p->WriteLine(cd);
		p->Close();
	}

	SqlConnection^ SC;
	SqlConnectionStringBuilder^ SCSB;

	void func()
	{
		SCSB = gcnew SqlConnectionStringBuilder();
		SCSB->DataSource = "DESKTOP-CSUD368\SQLEXPRESS01";
		SCSB->InitialCatalog = "Vlad";
		SCSB->IntegratedSecurity = true;

		SC = gcnew SqlConnection(Convert::ToString(SCSB));
	}

	void put(int a, String^ b, String^ w, String^ d, String^ e, String^ f, String^ g, String^ h, String^ y)
	{
		try
		{
			func();
			String^ q = "INSERT INTO dbo.Приобретённое (ID, Одежда, Размер, Пол, Цвет, Особенности, Оптовая_цена, Розничная_цена, Скидка) VALUES (@a, @b, @c, @d, @e, @f, @g, @h, @y)";
	
			SqlCommand^ c = gcnew SqlCommand(q, SC);
			c->Parameters->AddWithValue("@a", a);
			c->Parameters->AddWithValue("@b", b);
			c->Parameters->AddWithValue("@c", w);
			c->Parameters->AddWithValue("@d", d);
			c->Parameters->AddWithValue("@e", e);
			c->Parameters->AddWithValue("@f", f);
			c->Parameters->AddWithValue("@g", g);
			c->Parameters->AddWithValue("@h", h);
			c->Parameters->AddWithValue("@y", y);

			SC->Open();
			c->ExecuteNonQuery();
		}
		finally
		{
			if (SC != nullptr)
				SC->Close();
		}
	}

	void put2(String^ b, String^ w, String^ d, String^ e, String^ f, String^ g, int a)
	{
		try
		{
			func();
			String^ q = "INSERT INTO dbo.Проданное (Одежда, Размер, Пол, Цвет, Особенности, Доход, ID) VALUES (@b, @c, @d, @e, @f, @g, @a)";

			SqlCommand^ c = gcnew SqlCommand(q, SC);
			c->Parameters->AddWithValue("@a", a);
			c->Parameters->AddWithValue("@b", b);
			c->Parameters->AddWithValue("@c", w);
			c->Parameters->AddWithValue("@d", d);
			c->Parameters->AddWithValue("@e", e);
			c->Parameters->AddWithValue("@f", f);
			c->Parameters->AddWithValue("@g", g);

			SC->Open();
			c->ExecuteNonQuery();
		}
		finally
		{
			if (SC != nullptr)
				SC->Close();
		}
	}

	void del(int a)
	{
		try
		{
			func();
			String^ q = "DELETE FROM dbo.Приобретённое WHERE ID = @a";

			SqlCommand^ c = gcnew SqlCommand(q, SC);
			c->Parameters->AddWithValue("@a", a);

			SC->Open();
			c->ExecuteNonQuery();
		}
		finally
		{
			if (SC != nullptr)
				SC->Close();
		}
	}

	void del2(int a)
	{
		try
		{
			func();
			String^ q = "DELETE FROM dbo.Проданное WHERE ID = @a";

			SqlCommand^ c = gcnew SqlCommand(q, SC);
			c->Parameters->AddWithValue("@a", a);

			SC->Open();
			c->ExecuteNonQuery();
		}
		finally
		{
			if (SC != nullptr)
				SC->Close();
		}
	}

	void delAll()
	{
		try
		{
			func();
			String^ q = "DELETE * FROM dbo.Проданное";

			SqlCommand^ c = gcnew SqlCommand(q, SC);

			SC->Open();
			c->ExecuteNonQuery();
		}
		finally
		{
			if (SC != nullptr)
				SC->Close();
		}
	}

	void upd(int a, int b)
	{
		try
		{
			func();
			String^ q = "UPDATE dbo.Приобретённое SET ID = @b WHERE ID = @a";

			SqlCommand^ c = gcnew SqlCommand(q, SC);
			c->Parameters->AddWithValue("@a", a);
			c->Parameters->AddWithValue("@b", b);

			SC->Open();
			c->ExecuteNonQuery();
		}
		finally
		{
			if (SC != nullptr)
				SC->Close();
		}
	}

	void upd2(int a, int b)
	{
		try
		{
			func();
			String^ q = "UPDATE dbo.Проданное SET ID = @b WHERE ID = @a";

			SqlCommand^ c = gcnew SqlCommand(q, SC);
			c->Parameters->AddWithValue("@a", a);
			c->Parameters->AddWithValue("@b", b);

			SC->Open();
			c->ExecuteNonQuery();
		}
		finally
		{
			if (SC != nullptr)
				SC->Close();
		}
	}

	SqlDataReader^ sel (String^ a, int b)
	{
		try
		{
			func();
			String^ q = "SELECT [@a] FROM dbo.Приобретённое WHERE ID = @b";

			SqlCommand^ c = gcnew SqlCommand(q, SC);
			c->Parameters->AddWithValue("@a", a);
			c->Parameters->AddWithValue("@b", b);

			SC->Open();

			SqlDataReader^ read = c->ExecuteReader();

			while (read->Read())
			{
				return read;
			}
		}
		finally
		{
			if (SC != nullptr)
				SC->Close();
		}
	}

	SqlDataReader^ sel2(String^ a, int b)
	{
		try
		{
			func();
			String^ q = "SELECT [@a] FROM dbo.Проданное WHERE ID = @b";

			SqlCommand^ c = gcnew SqlCommand(q, SC);
			c->Parameters->AddWithValue("@a", a);
			c->Parameters->AddWithValue("@b", b);

			SC->Open();

			SqlDataReader^ read = c->ExecuteReader();

			while (read->Read())
			{
				return read;
			}
		}
		finally
		{
			if (SC != nullptr)
				SC->Close();
		}
	}
};