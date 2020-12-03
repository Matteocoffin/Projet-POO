#pragma once
#include "GestionStats.h"

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
			//
			//TODO: ajoutez ici le code du constructeur
			//
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






	private: System::Windows::Forms::Button^ buttonRetour;
	private: System::Windows::Forms::RadioButton^ radioButtonSimulation;




	private: System::Windows::Forms::RadioButton^ radioButtonAStock;

	private: System::Windows::Forms::RadioButton^ radioButtonVCommercial;
	private: System::Windows::Forms::Label^ labelTitre;



	private: System::Windows::Forms::TextBox^ textBoxNom;

	private: System::Windows::Forms::Label^ labelNom;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			this->buttonRetour = (gcnew System::Windows::Forms::Button());
			this->radioButtonSimulation = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonAStock = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonVCommercial = (gcnew System::Windows::Forms::RadioButton());
			this->labelTitre = (gcnew System::Windows::Forms::Label());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->labelNom = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			// buttonRetour
			// 
			this->buttonRetour->Location = System::Drawing::Point(40, 272);
			this->buttonRetour->Name = L"buttonRetour";
			this->buttonRetour->Size = System::Drawing::Size(75, 23);
			this->buttonRetour->TabIndex = 7;
			this->buttonRetour->Text = L"↪ Retour";
			this->buttonRetour->UseVisualStyleBackColor = true;
			// 
			// radioButtonSimulation
			// 
			this->radioButtonSimulation->AutoSize = true;
			this->radioButtonSimulation->Location = System::Drawing::Point(12, 234);
			this->radioButtonSimulation->Name = L"radioButtonSimulation";
			this->radioButtonSimulation->Size = System::Drawing::Size(78, 17);
			this->radioButtonSimulation->TabIndex = 10;
			this->radioButtonSimulation->Text = L"Simulations";
			this->radioButtonSimulation->UseVisualStyleBackColor = true;
			this->radioButtonSimulation->CheckedChanged += gcnew System::EventHandler(this, &Stats::radioButtonSimulation_CheckedChanged);
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
			// textBoxNom
			// 
			this->textBoxNom->Location = System::Drawing::Point(411, 279);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(169, 20);
			this->textBoxNom->TabIndex = 13;
			// 
			// labelNom
			// 
			this->labelNom->AutoSize = true;
			this->labelNom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->labelNom->Location = System::Drawing::Point(355, 277);
			this->labelNom->Name = L"labelNom";
			this->labelNom->Size = System::Drawing::Size(0, 20);
			this->labelNom->TabIndex = 14;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(274, 15);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(460, 236);
			this->dataGridView1->TabIndex = 15;
			// 
			// Stats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 315);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->labelNom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->labelTitre);
			this->Controls->Add(this->radioButtonSimulation);
			this->Controls->Add(this->radioButtonAStock);
			this->Controls->Add(this->radioButtonVCommercial);
			this->Controls->Add(this->buttonRetour);
			this->Controls->Add(this->radioButtonMVendu);
			this->Controls->Add(this->radioButtonPVendu);
			this->Controls->Add(this->radioButtonClient);
			this->Controls->Add(this->radioButtonSeuil);
			this->Controls->Add(this->radioButtonMois);
			this->Controls->Add(this->PanierMoyen);
			this->Name = L"Stats";
			this->Text = L"Stats";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void radioButtonMois_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		labelNom->Text = "n° Mois :";
		String^ Mois = textBoxNom->Text;
		Service::GestionStats^ GestionStats1 = gcnew Service::GestionStats();
		dataGridView1->DataSource = GestionStats1->Mois(Mois);
		dataGridView1->DataMember = "stats";
	}
	private: System::Void radioButtonClient_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ Nom = textBoxNom->Text;
		Service::GestionStats^ GestionStats1 = gcnew Service::GestionStats();
		dataGridView1->DataSource = GestionStats1->Client(Nom);
		dataGridView1->DataMember = "stats";
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
	};
}
