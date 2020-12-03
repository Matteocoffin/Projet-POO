#pragma once
#include "Connexion.h"
#include "MapCommande.h"
#include "GestionCommande.h"
#include "AjouterArticle.h"
#include "AjouterDataPayement.h"


namespace commande {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ModeCommande
	/// </summary>
	public ref class ModeCommande : public System::Windows::Forms::Form
	{
	public:
		ModeCommande(void)
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
		~ModeCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: connexion^ cad;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(22, 126);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(158, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ModeCommande::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(22, 75);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(158, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &ModeCommande::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Id optionnel";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nom/Prenom optionnel";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(238, 43);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(391, 398);
			this->dataGridView1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 456);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 38);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ajouter Article";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModeCommande::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(22, 504);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(82, 35);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Afficher Article";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModeCommande::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(107, 456);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(78, 38);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Ajouter Date Paiement";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ModeCommande::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(22, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ModeCommande::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Id commande";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Date commande";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Date Envoie";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 285);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Date reception";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(22, 208);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(158, 20);
			this->textBox2->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(22, 253);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(158, 20);
			this->textBox3->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(22, 301);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(163, 20);
			this->textBox4->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(22, 343);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(163, 20);
			this->textBox5->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(19, 327);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Date paiement";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(19, 371);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Moyen de paiement";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"CB", L"RIB", L"EUROS" });
			this->comboBox3->Location = System::Drawing::Point(22, 387);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(163, 21);
			this->comboBox3->TabIndex = 19;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(379, 14);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Commande";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ModeCommande::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(478, 14);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Article";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ModeCommande::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(22, 427);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(163, 23);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Ajouter Commande";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ModeCommande::button6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(22, 169);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(158, 20);
			this->textBox6->TabIndex = 23;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(19, 153);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 13);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Nom societer";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(107, 504);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 35);
			this->button7->TabIndex = 25;
			this->button7->Text = L"Supprimer commande";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &ModeCommande::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(267, 14);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 23);
			this->button8->TabIndex = 26;
			this->button8->Text = L"Date paiement";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &ModeCommande::button8_Click);
			// 
			this->cad = gcnew connexion();
			comboBox1->BeginUpdate();
			comboBox2->BeginUpdate();
			this->cad = gcnew connexion("SELECT COUNT(*) FROM Client", 7);
			int tes = cad->GetIDINT() + 1;
			int id = 0;
			for (int i = 1; i < tes; i++)
			{
				id++;
				this->cad = gcnew connexion("select * from Client WHERE Id_client=" + id + "", 1);
				if (this->cad->GetNom() == this->cad->GetID()) {
					i--;
				}
				else {
					comboBox1->Items->Add(this->cad->GetNom() + " " + this->cad->GetPrenom());
					comboBox2->Items->Add(this->cad->GetID());
				}
			}
			comboBox1->EndUpdate();
			comboBox2->EndUpdate();
			// ModeCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(679, 541);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"ModeCommande";
			this->Text = L"ModeCommande";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//ajouter commande
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "") {
			MessageBox::Show("Inserer valeur dans les champs");
		}
		else {
			Object^ selectedItem2 = comboBox2->SelectedItem;
			String^ test = selectedItem2->ToString();
			int id = Int32::Parse(test);
			this->cad = gcnew connexion("select * from Client inner join AdresseClient on AdresseClient.Id_client = Client.Id_client inner join Adresse on Adresse.Id_adresse = AdresseClient.Id_adresse where Client.Id_client=" + id + "", 5);
			String^ nom = this->cad->GetNom();
			String^ prenom = this->cad->GetPrenom();
			String^ ville = this->cad->GetVille();
			String^ datecommande = textBox2->Text;
			String^ dateEnvoie = textBox3->Text;
			String^ dateReception = textBox4->Text;
			String^ datePaiement = textBox5->Text;
			Object^ selectedItem3 = comboBox3->SelectedItem;
			String^ nomSocieter = textBox6->Text;
			Service::GestionCommande^ GestionCommande1 = gcnew Service::GestionCommande(id, datecommande, dateEnvoie, dateReception, datePaiement, selectedItem3->ToString(), nom, prenom, ville, nomSocieter);
			GestionCommande1->InsertCommande("Commande");
		}
	}
		   //ajouter article
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Inserer valeur dans les champs");
	}
	else {
		int id = Int32::Parse(textBox1->Text);
		Service::GestionCommande^ GestionCommande1 = gcnew Service::GestionCommande(id);
		GestionCommande1->setID_Commande(id);
		this->Hide();
		fenetreArticle::AjouterArticle second_form;
		second_form.ShowDialog();
		this->Show();
	}
	
}

	   //ajouter date paiement
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Inserer valeur dans les champs");
	}
	else {
		int id = Int32::Parse(textBox1->Text);
		Service::GestionCommande^ GestionCommande1 = gcnew Service::GestionCommande(id);
		GestionCommande1->setID_Commande(id);
		this->Hide();
		fenetreDate::AjouterDataPayement trois_form;
		trois_form.ShowDialog();
		this->Show();
	}
	
}

	   //afficher article_commande
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Inserer valeur dans les champs");
	}
	else {
		int id = Int32::Parse(textBox1->Text);
		Service::GestionCommande^ GestionCommande1 = gcnew Service::GestionCommande(id);
		dataGridView1->DataSource = GestionCommande1->SelectCommande("commande");
		dataGridView1->DataMember = "commande";
	}
}

	   //afficher article aussi
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Service::GestionCommande^ GestionCommande1 = gcnew Service::GestionCommande();
	dataGridView1->DataSource = GestionCommande1->SelectCatalogue("commande");
	dataGridView1->DataMember = "commande";
}

	   //afficher commande
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Service::GestionCommande^ GestionCommande1 = gcnew Service::GestionCommande();
	dataGridView1->DataSource = GestionCommande1->listeCommande("commande");
	dataGridView1->DataMember = "commande";
}

	   //id commande
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    
}
	   //Combo Box id
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int selectedIndex = comboBox2->SelectedIndex;
	Object^ selectedItem = comboBox2->SelectedItem;
	comboBox1->SelectedIndex = selectedIndex;
}

	   //Combo Box Nom
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int selectedIndex = comboBox1->SelectedIndex;
	Object^ selectedItem = comboBox1->SelectedItem;
	comboBox2->SelectedIndex = selectedIndex;
}
	   //Supprimer
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Inserer valeur dans les champs");
	}
	else {
		int id = Int32::Parse(textBox1->Text);
		Service::GestionCommande^ GestionCommande1 = gcnew Service::GestionCommande(id);
		GestionCommande1->deleteCommande("commande");
	}
}
	   //date de payement
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Inserer valeur dans les champs");
	}
	else {
		int id = Int32::Parse(textBox1->Text);
		Service::GestionCommande^ GestionCommande1 = gcnew Service::GestionCommande(id);
		dataGridView1->DataSource = GestionCommande1->SelectDate("commande");
		dataGridView1->DataMember = "commande";
	}
}
};
}
