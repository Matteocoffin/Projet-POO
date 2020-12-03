#pragma once
#include "Connexion.h"
#include "MapClient.h"
#include "GestionClient.h"
#include "AdresseAjoutClient.h"

namespace client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de ModeClient
	/// </summary>
	public ref class ModeClient : public System::Windows::Forms::Form
	{
	public:
		ModeClient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~ModeClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button7;


	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 13);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Mode Client";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(35, 208);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(138, 20);
			this->textBox4->TabIndex = 26;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(35, 153);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(138, 20);
			this->textBox3->TabIndex = 25;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(35, 105);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(138, 20);
			this->textBox2->TabIndex = 24;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(35, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 20);
			this->textBox1->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Date anniv";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Nom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Prenom";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(20, 433);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ModeClient::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(191, 492);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 38);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Afficher Adresse Livraison";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ModeClient::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(20, 463);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModeClient::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(110, 433);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 53);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Creer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModeClient::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(346, 44);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(431, 453);
			this->dataGridView1->TabIndex = 14;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(535, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 28;
			this->button5->Text = L"Tous clients";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ModeClient::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(32, 304);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 13);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Ville facture";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Bordeaux", L"Paris", L"Eysines", L"Lyon" });
			this->comboBox1->Location = System::Drawing::Point(35, 320);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(138, 21);
			this->comboBox1->TabIndex = 31;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(32, 249);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 13);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Adresse facture";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(35, 265);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(138, 20);
			this->textBox5->TabIndex = 29;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(20, 492);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(165, 38);
			this->button6->TabIndex = 33;
			this->button6->Text = L"Ajouter adresse";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ModeClient::button6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(202, 265);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(138, 20);
			this->textBox6->TabIndex = 34;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(199, 249);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 13);
			this->label8->TabIndex = 35;
			this->label8->Text = L"Adresse livraison";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(26, 364);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(186, 13);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Id du personnel qui s\'occupe du client";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(29, 380);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(138, 20);
			this->textBox7->TabIndex = 37;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(199, 304);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 13);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Ville livraison";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Bordeaux", L"Paris", L"Eysines", L"Lyon" });
			this->comboBox2->Location = System::Drawing::Point(202, 320);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(138, 21);
			this->comboBox2->TabIndex = 38;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(191, 433);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(128, 52);
			this->button7->TabIndex = 40;
			this->button7->Text = L"Afficher Adresse Facture";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &ModeClient::button7_Click);
			// 
			// ModeClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(789, 548);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ModeClient";
			this->Text = L"ModeClient";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//creer
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "") {
		MessageBox::Show("Inserer valeur dans les champs");
	}
	else {
		String^ nom = textBox2->Text;
		String^ prenom = textBox3->Text;
		String^ date = textBox4->Text;
		String^ adresse = textBox5->Text;
		String^ adresseFacture = textBox6->Text;
		int id_P = Int32::Parse(textBox7->Text);
		Object^ selectedItem1 = comboBox1->SelectedItem;
		Object^ selectedItem2 = comboBox2->SelectedItem;
		Service::GestionClient^ GestionClient1 = gcnew Service::GestionClient(nom, prenom, date, id_P, adresseFacture, selectedItem2->ToString(), adresse, selectedItem1->ToString());
		GestionClient1->InsertClient("Client");
	}
}

	   //Liste des clients
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Service::GestionClient^ GestionClient1 = gcnew Service::GestionClient();
	dataGridView1->DataSource = GestionClient1->listeClient("Client");
	dataGridView1->DataMember = "client";
}

	   //Select client Livraison
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Inserer valeur dans les champs");
	}
	else {
		int id = Int32::Parse(textBox1->Text);
		Service::GestionClient^ GestionClient1 = gcnew Service::GestionClient(id);
		Service::GestionClient^ GestionClient2 = gcnew Service::GestionClient(id);
		dataGridView1->DataSource = GestionClient1->SelectClient("Client");
		dataGridView1->DataMember = "client";
		textBox2->Text = GestionClient1->getNom();
		textBox3->Text = GestionClient1->getPrenom();
		textBox4->Text = GestionClient1->getDate();
		textBox5->Text = GestionClient1->getRue();
		textBox7->Text = GestionClient1->getPersonnel();
		int index1 = comboBox1->FindString(GestionClient1->getVille());
		comboBox1->SelectedIndex = index1;
		GestionClient2->SelectClientFacture("Client");
		textBox6->Text = GestionClient2->getRue();
		int index2 = comboBox1->FindString(GestionClient2->getVille());
		comboBox2->SelectedIndex = index2;
	}
	
}

	   //Select client Facture
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Inserer valeur dans les champs");
	}
	else {
		int id = Int32::Parse(textBox1->Text);
		Service::GestionClient^ GestionClient1 = gcnew Service::GestionClient(id);
		Service::GestionClient^ GestionClient2 = gcnew Service::GestionClient(id);
		GestionClient1->SelectClient("Client");
		textBox2->Text = GestionClient1->getNom();
		textBox3->Text = GestionClient1->getPrenom();
		textBox4->Text = GestionClient1->getDate();
		textBox5->Text = GestionClient1->getRue();
		textBox7->Text = GestionClient1->getPersonnel();
		int index1 = comboBox1->FindString(GestionClient1->getVille());
		comboBox1->SelectedIndex = index1;
		dataGridView1->DataSource = GestionClient2->SelectClientFacture("Client");
		dataGridView1->DataMember = "client";
		textBox6->Text = GestionClient2->getRue();
		int index2 = comboBox1->FindString(GestionClient2->getVille());
		comboBox2->SelectedIndex = index2;
	}
	
}

	   // Modifier les valeurs
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Inserer valeur dans les champs");
	}
	else {
		int id = Int32::Parse(textBox1->Text);
		String^ nom = textBox2->Text;
		String^ prenom = textBox3->Text;
		String^ date = textBox4->Text;
		String^ adresse = textBox5->Text;
		String^ adresseFacture = textBox6->Text;
		int id_P = Int32::Parse(textBox7->Text);
		Object^ selectedItem1 = comboBox1->SelectedItem;
		Object^ selectedItem2 = comboBox2->SelectedItem;
		Service::GestionClient^ GestionClient1 = gcnew Service::GestionClient(id, nom, prenom, date, id_P, adresseFacture, selectedItem1->ToString(), adresse, selectedItem2->ToString());
		GestionClient1->UpdateClient("Client");
	}
}
	   // Supprimer les valeurs
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Inserer valeur dans les champs");
	}
	else {
		int id = Int32::Parse(textBox1->Text);
		Service::GestionClient^ GestionClient1 = gcnew Service::GestionClient(id);
		GestionClient1->supprimer();
	}
	
}

	   // Ajouter adresse
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Inserer valeur dans les champs");
	}
	else {
		int id = Int32::Parse(textBox1->Text);
		Service::GestionClient^ GestionClient1 = gcnew Service::GestionClient(id);
		GestionClient1->setID_Client(id);
		this->Hide();
		fenetreAdresse::AdresseAjoutClient second_form;
		second_form.ShowDialog();
		this->Show();
	}
}

};
}
