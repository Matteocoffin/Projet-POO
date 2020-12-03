#pragma once
#include "Connexion.h"
#include "MapStock.h"
#include "GestionStock.h"

namespace stock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ModeStock
	/// </summary>
	public ref class ModeStock : public System::Windows::Forms::Form
	{
	public:
		ModeStock(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ModeStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;

	protected:














	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Mode Stock";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(31, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(137, 20);
			this->textBox3->TabIndex = 25;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(31, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 20);
			this->textBox2->TabIndex = 24;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(31, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 20);
			this->textBox1->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Article";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 136);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Quantité pack";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(27, 444);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ModeStock::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(27, 415);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Afficher";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ModeStock::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(27, 473);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModeStock::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(114, 415);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 81);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Creer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModeStock::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(256, 43);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 368);
			this->dataGridView1->TabIndex = 14;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(343, 14);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 28;
			this->button5->Text = L"Tous stocks";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ModeStock::button5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Quantité Stock";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(31, 205);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(137, 20);
			this->textBox4->TabIndex = 30;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(31, 309);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(137, 20);
			this->textBox5->TabIndex = 32;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 293);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Prix HT";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(31, 259);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(137, 20);
			this->textBox6->TabIndex = 34;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(140, 13);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Seuil de réaprovisionnement";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(31, 358);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(137, 20);
			this->textBox7->TabIndex = 36;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 342);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 13);
			this->label8->TabIndex = 35;
			this->label8->Text = L"Taux TVA";
			// 
			// ModeStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(548, 530);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ModeStock";
			this->Text = L"ModeStock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//creer
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nom = textBox2->Text;
	int quantite = Int32::Parse(textBox3->Text);
	int stock = Int32::Parse(textBox4->Text);
	int Seuil = Int32::Parse(textBox6->Text);
	int prix = Int32::Parse(textBox5->Text);
	float TVA = float::Parse(textBox7->Text);
	Service::GestionStock^ GestionStock1 = gcnew Service::GestionStock(nom, quantite,stock,Seuil,prix,TVA);
	GestionStock1->InsertStock("Stock");
}
	   //Liste des Stock
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Service::GestionStock^ GestionStock1 = gcnew Service::GestionStock();
	dataGridView1->DataSource = GestionStock1->listeStock("Stock");
	dataGridView1->DataMember = "Stock";
}

	   //Select Stock
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Int32::Parse(textBox1->Text);
	Service::GestionStock^ GestionStock1 = gcnew Service::GestionStock(id);
	dataGridView1->DataSource = GestionStock1->SelectStock("Stock");
	dataGridView1->DataMember = "Stock";
	textBox2->Text = GestionStock1->getNom();
	textBox3->Text = GestionStock1->getQuantite();
	textBox4->Text = GestionStock1->getStock();
	textBox5->Text = GestionStock1->getPrix();
	textBox6->Text = GestionStock1->getSeuil();
	textBox7->Text = GestionStock1->getTVA();
}

	   // Modifier les valeurs
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Int32::Parse(textBox1->Text);
	String^ nom = textBox2->Text;
	int quantite = Int32::Parse(textBox3->Text);
	int stock = Int32::Parse(textBox4->Text);
	int Seuil = Int32::Parse(textBox6->Text);
	int prix = Int32::Parse(textBox5->Text);
	float TVA = float::Parse(textBox7->Text);
	Service::GestionStock^ GestionStock1 = gcnew Service::GestionStock(id, nom, quantite, stock, Seuil, prix, TVA);
	GestionStock1->UpdateStock("Stock");
}

	   //supprimer
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Int32::Parse(textBox1->Text);
	Service::GestionStock^ GestionStock1 = gcnew Service::GestionStock(id);
	GestionStock1->supprimer();
}
};
}

