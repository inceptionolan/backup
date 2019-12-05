import { Component, OnInit } from '@angular/core';
import { DataFetchService } from '../data-fetch.service';
import { homedir } from 'os';

@Component({
  selector: 'app-home',
  templateUrl: './home.component.html',
  styleUrls: ['./home.component.css']
})
export class HomeComponent implements OnInit {
  morya;
  constructor(public dataGhe : DataFetchService ) {}

  ngOnInit() 
  {
    let dataAlaRe = this.dataGhe.getData();
    dataAlaRe.subscribe((data)=>{
      console.log(data);
      this.morya=data;
    })
  }

}


