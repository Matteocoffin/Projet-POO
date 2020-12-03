#pragma once
#include "AdresseAjout.h"
#include "Connexion.h"
#include "MapPersonnel.h"
#include "GestionPersonnel.h"

namespace personnel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ModePersonnel
	/// </summary>
	public ref class ModePersonnel : public System::Windows::Forms::Form
	{
	public:
		ModePersonnel(void)
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
		~ModePersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox6;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(261, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(516, 426);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(99, 386);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 126);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Creer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModePersonnel::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(18, 444);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModePersonnel::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(18, 386);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Afficher";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ModePersonnel::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(18, 415);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ModePersonnel::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Prenom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Id";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Date embauche";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(36, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 20);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(36, 102);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(138, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(36, 150);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(138, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(36, 205);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(138, 20);
			this->textBox4->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Mode Personnel";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(474, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Tous Personnel";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ModePersonnel::button5_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(36, 251);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(138, 20);
			this->textBox5->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(33, 235);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Adresse";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(18, 473);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 39);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Ajouter adresse";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ModePersonnel::button6_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Bordeaux", L"Paris", L"Eysines", L"Lyon" });
			this->comboBox1->Location = System::Drawing::Point(36, 300);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(138, 21);
			this->comboBox1->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(33, 284);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Ville";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(18, 357);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(86, 23);
			this->button7->TabIndex = 20;
			this->button7->Text = L"Ajout diriger";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &ModePersonnel::button7_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(110, 359);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 341);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(204, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Optionnel : Ajouter l\'id du personnel diriger";
			// 
			// ModePersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(813, 551);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button6);
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
			this->Name = L"ModePersonnel";
			this->Text = L"ModePersonnel";
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
		Object^ selectedItem = comboBox1->SelectedItem;
		Service::GestionPersonnel^ GestionPersonnel1 = gcnew Service::GestionPersonnel(nom, prenom, date, adresse, selectedItem->ToString());
		GestionPersonnel1->InsertPersonnel("personnel");
	}
}
	   //Liste des Personnel
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Service::GestionPersonnel^ GestionPersonnel1 = gcnew Service::GestionPersonnel();
	dataGridView1->DataSource = GestionPersonnel1->listePersonnel("personnel");
	dataGridView1->DataMember = "personnel";
}

	   //Select Personnel
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Inserer valeur dans les champs");
	}
	else {
		int id = Int32::Parse(textBox1->Text);
		Service::GestionPersonnel^ GestionPersonnel1 = gcnew Service::GestionPersonnel(id);
		dataGridView1->DataSource = GestionPersonnel1->SelectPersonnel("personnel");
		dataGridView1->DataMember = "personnel";
		textBox2->Text = GestionPersonnel1->getNom();
		textBox3->Text = GestionPersonnel1->getPrenom();
		textBox4->Text = GestionPersonnel1->getDate();
		textBox5->Text = GestionPersonnel1->getRue();
		int index = comboBox1->FindString(GestionPersonnel1->getVille());
		comboBox1->SelectedIndex = index;
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
		Object^ selectedItem = comboBox1->SelectedItem;
		Service::GestionPersonnel^ GestionPersonnel1 = gcnew Service::GestionPersonnel(id, nom, prenom, date, adresse, selectedItem->ToString());
		GestionPersonnel1->UpdatePersonnel("personnel");
	}
}

	   //supprimer
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Inserer valeur dans les champs");
	}
	else {
		int id = Int32::Parse(textBox1->Text);
		Service::GestionPersonnel^ GestionPersonnel1 = gcnew Service::GestionPersonnel(id);
		GestionPersonnel1->supprimer(id);
	}
}

	   //ajouter adresse
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "") {
			MessageBox::Show("Inserer valeur dans les champs");
		}
		else {
			int id = Int32::Parse(textBox1->Text);
			Service::GestionPersonnel^ GestionPersonnel1 = gcnew Service::GestionPersonnel(id);
			GestionPersonnel1->setID_Personnel(id);
			this->Hide();
			fenetreAdresse::AdresseAjout second_form;
			second_form.ShowDialog();
			this->Show();
		}
		
	}

		   //ajouter dirigeant
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Inserer valeur dans les champs");
	}
	else {
		int id = Int32::Parse(textBox1->Text);
		Service::GestionPersonnel^ GestionPersonnel1 = gcnew Service::GestionPersonnel(id);
		int id_P = Int32::Parse(textBox6->Text);
		GestionPersonnel1->AjouterDirigeant(id_P);
	}
}

};
}
