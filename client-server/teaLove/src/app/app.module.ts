import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { HomeComponent } from './home/home.component';
import { RouterModule } from '@angular/router';
import { HttpClientModule } from '@angular/common/http';
import { EditComponent } from './edit/edit.component';
import { AddEmpComponent } from './add-emp/add-emp.component';
import { FormsModule } from '@angular/forms';


@NgModule({
  declarations: [
    AppComponent,
    HomeComponent,
    EditComponent,
    AddEmpComponent,
  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
    HttpClientModule,
    FormsModule,
    RouterModule.forRoot([
      {path : 'home',component:HomeComponent },
      {path : 'edit',component:EditComponent },
      {path : 'addemp',component:AddEmpComponent }


    ])
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
