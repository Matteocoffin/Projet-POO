#pragma once
#include "GestionStats.h"
#include "Assert.h"

namespace statistique {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Stats
	/// </summary>
	public ref class Stats : public System::Windows::Forms::Form
	{
	public:
		Stats(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Stats()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::RadioButton^ PanierMoyen;
	private: System::Windows::Forms::RadioButton^ radioButtonMois;
	private: System::Windows::Forms::RadioButton^ radioButtonSeuil;
	private: System::Windows::Forms::RadioButton^ radioButtonClient;
	private: System::Windows::Forms::RadioButton^ radioButtonPVendu;
	private: System::Windows::Forms::RadioButton^ radioButtonMVendu;


	private: Service::GestionStats^ Stat;









	private: System::Windows::Forms::RadioButton^ radioButtonAStock;

	private: System::Windows::Forms::RadioButton^ radioButtonVCommercial;
	private: System::Windows::Forms::Label^ labelTitre;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBoxNom;

	private: System::Windows::Forms::Label^ labelNom;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ Marge1;
	private: System::Windows::Forms::RadioButton^ Marge2;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ Marge3;

	private: System::Windows::Forms::Label^ LabelmargeComme;
	private: System::Windows::Forms::Label^ labelTVA;
	private: System::Windows::Forms::TextBox^ textBoxTVA;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ labelRemise;
	private: System::Windows::Forms::RadioButton^ Remise2;

	private: System::Windows::Forms::RadioButton^ Remise1;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ labelAutre;
	private: System::Windows::Forms::RadioButton^ AutreD3;

	private: System::Windows::Forms::RadioButton^ AutreD2;

	private: System::Windows::Forms::RadioButton^ AutreD1;

	private: System::Windows::Forms::Button^ Simuler;

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
			this->PanierMoyen = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMois = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonSeuil = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonClient = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonPVendu = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMVendu = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonAStock = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonVCommercial = (gcnew System::Windows::Forms::RadioButton());
			this->labelTitre = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->labelNom = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Marge1 = (gcnew System::Windows::Forms::RadioButton());
			this->Marge2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->LabelmargeComme = (gcnew System::Windows::Forms::Label());
			this->Marge3 = (gcnew System::Windows::Forms::RadioButton());
			this->labelTVA = (gcnew System::Windows::Forms::Label());
			this->textBoxTVA = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->labelRemise = (gcnew System::Windows::Forms::Label());
			this->Remise2 = (gcnew System::Windows::Forms::RadioButton());
			this->Remise1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->labelAutre = (gcnew System::Windows::Forms::Label());
			this->AutreD3 = (gcnew System::Windows::Forms::RadioButton());
			this->AutreD2 = (gcnew System::Windows::Forms::RadioButton());
			this->AutreD1 = (gcnew System::Windows::Forms::RadioButton());
			this->Simuler = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// PanierMoyen
			// 
			this->PanierMoyen->AutoSize = true;
			this->PanierMoyen->Location = System::Drawing::Point(12, 54);
			this->PanierMoyen->Name = L"PanierMoyen";
			this->PanierMoyen->Size = System::Drawing::Size(92, 17);
			this->PanierMoyen->TabIndex = 1;
			this->PanierMoyen->Text = L" Panier moyen";
			this->PanierMoyen->UseVisualStyleBackColor = true;
			this->PanierMoyen->CheckedChanged += gcnew System::EventHandler(this, &Stats::PanierMoyen_CheckedChanged);
			// 
			// radioButtonMois
			// 
			this->radioButtonMois->AutoSize = true;
			this->radioButtonMois->Location = System::Drawing::Point(12, 77);
			this->radioButtonMois->Name = L"radioButtonMois";
			this->radioButtonMois->Size = System::Drawing::Size(155, 17);
			this->radioButtonMois->TabIndex = 2;
			this->radioButtonMois->Text = L"Chiffre d’affaire sur un mois ";
			this->radioButtonMois->UseVisualStyleBackColor = true;
			this->radioButtonMois->CheckedChanged += gcnew System::EventHandler(this, &Stats::radioButtonMois_CheckedChanged);
			// 
			// radioButtonSeuil
			// 
			this->radioButtonSeuil->AutoSize = true;
			this->radioButtonSeuil->Location = System::Drawing::Point(12, 100);
			this->radioButtonSeuil->Name = L"radioButtonSeuil";
			this->radioButtonSeuil->Size = System::Drawing::Size(239, 17);
			this->radioButtonSeuil->TabIndex = 3;
			this->radioButtonSeuil->Text = L"Produits sous le seuil de réapprovisionnement";
			this->radioButtonSeuil->UseVisualStyleBackColor = true;
			this->radioButtonSeuil->CheckedChanged += gcnew System::EventHandler(this, &Stats::radioButtonSeuil_CheckedChanged);
			// 
			// radioButtonClient
			// 
			this->radioButtonClient->AutoSize = true;
			this->radioButtonClient->Location = System::Drawing::Point(12, 123);
			this->radioButtonClient->Name = L"radioButtonClient";
			this->radioButtonClient->Size = System::Drawing::Size(209, 17);
			this->radioButtonClient->TabIndex = 4;
			this->radioButtonClient->Text = L"Montant total des achats pour un client";
			this->radioButtonClient->UseVisualStyleBackColor = true;
			this->radioButtonClient->CheckedChanged += gcnew System::EventHandler(this, &Stats::radioButtonClient_CheckedChanged);
			// 
			// radioButtonPVendu
			// 
			this->radioButtonPVendu->AutoSize = true;
			this->radioButtonPVendu->Location = System::Drawing::Point(12, 146);
			this->radioButtonPVendu->Name = L"radioButtonPVendu";
			this->radioButtonPVendu->Size = System::Drawing::Size(149, 17);
			this->radioButtonPVendu->TabIndex = 5;
			this->radioButtonPVendu->Text = L"10 articles les plus vendus";
			this->radioButtonPVendu->UseVisualStyleBackColor = true;
			this->radioButtonPVendu->CheckedChanged += gcnew System::EventHandler(this, &Stats::radioButtonPVendu_CheckedChanged);
			// 
			// radioButtonMVendu
			// 
			this->radioButtonMVendu->AutoSize = true;
			this->radioButtonMVendu->Location = System::Drawing::Point(12, 169);
			this->radioButtonMVendu->Name = L"radioButtonMVendu";
			this->radioButtonMVendu->Size = System::Drawing::Size(157, 17);
			this->radioButtonMVendu->TabIndex = 6;
			this->radioButtonMVendu->Text = L"10 articles les moins vendus";
			this->radioButtonMVendu->UseVisualStyleBackColor = true;
			this->radioButtonMVendu->CheckedChanged += gcnew System::EventHandler(this, &Stats::radioButtonMVendu_CheckedChanged);
			// 
			// radioButtonAStock
			// 
			this->radioButtonAStock->AutoSize = true;
			this->radioButtonAStock->Location = System::Drawing::Point(12, 211);
			this->radioButtonAStock->Name = L"radioButtonAStock";
			this->radioButtonAStock->Size = System::Drawing::Size(141, 17);
			this->radioButtonAStock->TabIndex = 9;
			this->radioButtonAStock->Text = L"Valeur  d’achat du stock";
			this->radioButtonAStock->UseVisualStyleBackColor = true;
			this->radioButtonAStock->CheckedChanged += gcnew System::EventHandler(this, &Stats::radioButtonAStock_CheckedChanged);
			// 
			// radioButtonVCommercial
			// 
			this->radioButtonVCommercial->AutoSize = true;
			this->radioButtonVCommercial->Location = System::Drawing::Point(12, 188);
			this->radioButtonVCommercial->Name = L"radioButtonVCommercial";
			this->radioButtonVCommercial->Size = System::Drawing::Size(161, 17);
			this->radioButtonVCommercial->TabIndex = 8;
			this->radioButtonVCommercial->Text = L"Valeur commerciale du stock";
			this->radioButtonVCommercial->UseVisualStyleBackColor = true;
			this->radioButtonVCommercial->CheckedChanged += gcnew System::EventHandler(this, &Stats::radioButtonVCommercial_CheckedChanged);
			// 
			// labelTitre
			// 
			this->labelTitre->AutoSize = true;
			this->labelTitre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelTitre->Location = System::Drawing::Point(30, 15);
			this->labelTitre->Name = L"labelTitre";
			this->labelTitre->Size = System::Drawing::Size(200, 25);
			this->labelTitre->TabIndex = 11;
			this->labelTitre->Text = L"Choisissez un mode :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(274, 15);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(460, 236);
			this->dataGridView1->TabIndex = 15;
			// 
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(411, 279);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(169, 20);
			this->textBoxNom->TabIndex = 13;
			this->textBoxNom->TextChanged += gcnew System::EventHandler(this, &Stats::textBoxNom_TextChanged);
			// 
			// labelNom
			// 
			this->labelNom->AutoSize = true;
			this->labelNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->labelNom->Location = System::Drawing::Point(312, 277);
			this->labelNom->Name = L"labelNom";
			this->labelNom->Size = System::Drawing::Size(0, 20);
			this->labelNom->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(783, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 25);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Simulation :";
			// 
			// Marge1
			// 
			this->Marge1->AutoSize = true;
			this->Marge1->Location = System::Drawing::Point(8, 34);
			this->Marge1->Name = L"Marge1";
			this->Marge1->Size = System::Drawing::Size(45, 17);
			this->Marge1->TabIndex = 16;
			this->Marge1->TabStop = true;
			this->Marge1->Text = L"+5%";
			this->Marge1->UseVisualStyleBackColor = true;
			// 
			// Marge2
			// 
			this->Marge2->AutoSize = true;
			this->Marge2->Location = System::Drawing::Point(59, 34);
			this->Marge2->Name = L"Marge2";
			this->Marge2->Size = System::Drawing::Size(51, 17);
			this->Marge2->TabIndex = 17;
			this->Marge2->TabStop = true;
			this->Marge2->Text = L"+10%";
			this->Marge2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->LabelmargeComme);
			this->groupBox1->Controls->Add(this->Marge3);
			this->groupBox1->Controls->Add(this->Marge2);
			this->groupBox1->Controls->Add(this->Marge1);
			this->groupBox1->Location = System::Drawing::Point(754, 100);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(174, 63);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// LabelmargeComme
			// 
			this->LabelmargeComme->AutoSize = true;
			this->LabelmargeComme->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->LabelmargeComme->Location = System::Drawing::Point(12, 14);
			this->LabelmargeComme->Name = L"LabelmargeComme";
			this->LabelmargeComme->Size = System::Drawing::Size(131, 17);
			this->LabelmargeComme->TabIndex = 19;
			this->LabelmargeComme->Text = L"Marge commerciale";
			// 
			// Marge3
			// 
			this->Marge3->AutoSize = true;
			this->Marge3->Location = System::Drawing::Point(116, 34);
			this->Marge3->Name = L"Marge3";
			this->Marge3->Size = System::Drawing::Size(51, 17);
			this->Marge3->TabIndex = 18;
			this->Marge3->TabStop = true;
			this->Marge3->Text = L"+15%";
			this->Marge3->UseVisualStyleBackColor = true;
			// 
			// labelTVA
			// 
			this->labelTVA->AutoSize = true;
			this->labelTVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->labelTVA->Location = System::Drawing::Point(768, 54);
			this->labelTVA->Name = L"labelTVA";
			this->labelTVA->Size = System::Drawing::Size(94, 17);
			this->labelTVA->TabIndex = 20;
			this->labelTVA->Text = L"Nouvelle TVA";
			// 
			// textBoxTVA
			// 
			this->textBoxTVA->Location = System::Drawing::Point(771, 74);
			this->textBoxTVA->Name = L"textBoxTVA";
			this->textBoxTVA->Size = System::Drawing::Size(66, 20);
			this->textBoxTVA->TabIndex = 21;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->labelRemise);
			this->groupBox2->Controls->Add(this->Remise2);
			this->groupBox2->Controls->Add(this->Remise1);
			this->groupBox2->Location = System::Drawing::Point(754, 157);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(174, 63);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// labelRemise
			// 
			this->labelRemise->AutoSize = true;
			this->labelRemise->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->labelRemise->Location = System::Drawing::Point(12, 14);
			this->labelRemise->Name = L"labelRemise";
			this->labelRemise->Size = System::Drawing::Size(138, 17);
			this->labelRemise->TabIndex = 19;
			this->labelRemise->Text = L"Remise commerciale";
			// 
			// Remise2
			// 
			this->Remise2->AutoSize = true;
			this->Remise2->Location = System::Drawing::Point(59, 34);
			this->Remise2->Name = L"Remise2";
			this->Remise2->Size = System::Drawing::Size(42, 17);
			this->Remise2->TabIndex = 17;
			this->Remise2->TabStop = true;
			this->Remise2->Text = L"-6%";
			this->Remise2->UseVisualStyleBackColor = true;
			// 
			// Remise1
			// 
			this->Remise1->AutoSize = true;
			this->Remise1->Location = System::Drawing::Point(8, 34);
			this->Remise1->Name = L"Remise1";
			this->Remise1->Size = System::Drawing::Size(42, 17);
			this->Remise1->TabIndex = 16;
			this->Remise1->TabStop = true;
			this->Remise1->Text = L"-5%";
			this->Remise1->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->labelAutre);
			this->groupBox3->Controls->Add(this->AutreD3);
			this->groupBox3->Controls->Add(this->AutreD2);
			this->groupBox3->Controls->Add(this->AutreD1);
			this->groupBox3->Location = System::Drawing::Point(754, 214);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(174, 63);
			this->groupBox3->TabIndex = 20;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"groupBox3";
			// 
			// labelAutre
			// 
			this->labelAutre->AutoSize = true;
			this->labelAutre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->labelAutre->Location = System::Drawing::Point(12, 14);
			this->labelAutre->Name = L"labelAutre";
			this->labelAutre->Size = System::Drawing::Size(109, 17);
			this->labelAutre->TabIndex = 19;
			this->labelAutre->Text = L"Autre démarche";
			// 
			// AutreD3
			// 
			this->AutreD3->AutoSize = true;
			this->AutreD3->Location = System::Drawing::Point(116, 34);
			this->AutreD3->Name = L"AutreD3";
			this->AutreD3->Size = System::Drawing::Size(45, 17);
			this->AutreD3->TabIndex = 18;
			this->AutreD3->TabStop = true;
			this->AutreD3->Text = L"+5%";
			this->AutreD3->UseVisualStyleBackColor = true;
			// 
			// AutreD2
			// 
			this->AutreD2->AutoSize = true;
			this->AutreD2->Location = System::Drawing::Point(59, 34);
			this->AutreD2->Name = L"AutreD2";
			this->AutreD2->Size = System::Drawing::Size(45, 17);
			this->AutreD2->TabIndex = 17;
			this->AutreD2->TabStop = true;
			this->AutreD2->Text = L"+3%";
			this->AutreD2->UseVisualStyleBackColor = true;
			// 
			// AutreD1
			// 
			this->AutreD1->AutoSize = true;
			this->AutreD1->Location = System::Drawing::Point(8, 34);
			this->AutreD1->Name = L"AutreD1";
			this->AutreD1->Size = System::Drawing::Size(45, 17);
			this->AutreD1->TabIndex = 16;
			this->AutreD1->TabStop = true;
			this->AutreD1->Text = L"+2%";
			this->AutreD1->UseVisualStyleBackColor = true;
			// 
			// Simuler
			// 
			this->Simuler->Location = System::Drawing::Point(800, 283);
			this->Simuler->Name = L"Simuler";
			this->Simuler->Size = System::Drawing::Size(75, 23);
			this->Simuler->TabIndex = 22;
			this->Simuler->Text = L"Simuler";
			this->Simuler->UseVisualStyleBackColor = true;
			this->Simuler->Click += gcnew System::EventHandler(this, &Stats::Simuler_Click);
			// 
			// Stats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 315);
			this->Controls->Add(this->Simuler);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->textBoxTVA);
			this->Controls->Add(this->labelTVA);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelNom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->labelTitre);
			this->Controls->Add(this->radioButtonAStock);
			this->Controls->Add(this->radioButtonVCommercial);
			this->Controls->Add(this->radioButtonMVendu);
			this->Controls->Add(this->radioButtonPVendu);
			this->Controls->Add(this->radioButtonClient);
			this->Controls->Add(this->radioButtonSeuil);
			this->Controls->Add(this->radioButtonMois);
			this->Controls->Add(this->PanierMoyen);
			this->Name = L"Stats";
			this->Text = L"Stats";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void radioButtonMois_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		labelNom->Text = "n° Mois :";
		if (textBoxNom->Text == "") {
			MessageBox::Show("Inserer valeur dans le champ");
		}
		else {
			labelNom->Text = "n° Mois :";
			String^ Mois = textBoxNom->Text;
			Service::GestionStats^ GestionStats1 = gcnew Service::GestionStats();
			dataGridView1->DataSource = GestionStats1->Mois(Mois);
			dataGridView1->DataMember = "stats";
		}
		
	}
	private: System::Void radioButtonClient_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		labelNom->Text = "Nom :";
		if (textBoxNom->Text == "") {
			MessageBox::Show("Inserer valeur dans le champ");
		}
		else {
			String^ Nom = textBoxNom->Text;
			Service::GestionStats^ GestionStats1 = gcnew Service::GestionStats();
			dataGridView1->DataSource = GestionStats1->Client(Nom);
			dataGridView1->DataMember = "stats";
		}
	}
	private: System::Void PanierMoyen_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		labelNom->ResetText();
		Service::GestionStats^ GestionStats1 = gcnew Service::GestionStats();
		dataGridView1->DataSource = GestionStats1->Panier();
		dataGridView1->DataMember = "stats";
	}
	private: System::Void radioButtonSeuil_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		labelNom->ResetText();
		Service::GestionStats^ GestionStats1 = gcnew Service::GestionStats();
		dataGridView1->DataSource = GestionStats1->Seuil();
		dataGridView1->DataMember = "stats";
	}
	private: System::Void radioButtonPVendu_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		labelNom->ResetText();
		Service::GestionStats^ GestionStats1 = gcnew Service::GestionStats();
		dataGridView1->DataSource = GestionStats1->PVendu();
		dataGridView1->DataMember = "stats";
	}
	private: System::Void radioButtonMVendu_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		labelNom->ResetText();
		Service::GestionStats^ GestionStats1 = gcnew Service::GestionStats();
		dataGridView1->DataSource = GestionStats1->MVendu();
		dataGridView1->DataMember = "stats";
	}
	private: System::Void radioButtonVCommercial_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		labelNom->ResetText();
		Service::GestionStats^ GestionStats1 = gcnew Service::GestionStats();
		dataGridView1->DataSource = GestionStats1->VCommercial();
		dataGridView1->DataMember = "stats";
	}
	private: System::Void radioButtonAStock_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		labelNom->ResetText();
		Service::GestionStats^ GestionStats1 = gcnew Service::GestionStats();
		dataGridView1->DataSource = GestionStats1->VStock();
		dataGridView1->DataMember = "stats";
	}
	private: System::Void radioButtonSimulation_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		labelNom->ResetText();
	}

    private: System::Void Simuler_Click(System::Object^ sender, System::EventArgs^ e) {
		assert^ teste = gcnew assert();
	    labelNom->ResetText();
		Service::GestionStats^ GestionStats = gcnew Service::GestionStats;
		float TVA;
		if (textBoxTVA->Text == "") {
			//teste->assertDataEqualZero(TVA);
			TVA = 0;
		}
		else { 
			//teste->assertDataSupZero(TVA);
			TVA = float::Parse(textBoxTVA->Text); 
		}
	    dataGridView1->DataSource = GestionStats->Simuler(TVA, Marge1->Checked, Marge2->Checked, Marge3->Checked, Remise1->Checked, Remise2->Checked, AutreD1->Checked, AutreD2->Checked, AutreD3->Checked);
	    dataGridView1->DataMember = "stats";
		}
	private: System::Void textBoxNom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButtonMois->Checked == 1) {
			Service::GestionStats^ GestionStats = gcnew Service::GestionStats;
			dataGridView1->DataSource = GestionStats->Mois(textBoxNom->Text);
			dataGridView1->DataMember = "stats";
		}
		else if (radioButtonClient->Checked == 1) {
			Service::GestionStats^ GestionStats = gcnew Service::GestionStats;
			dataGridView1->DataSource = GestionStats->Client(textBoxNom->Text);
			dataGridView1->DataMember = "stats";
		}
	}
};
}
