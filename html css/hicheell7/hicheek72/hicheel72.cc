*{
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

#contain{
    width:100% ;
    height: auto;
    display: flex;
    justify-content: center;
}

.container{
    width: 85%;
    height: 55px;
    margin-left: 7.5%;
    margin-right: 7.5%;
    background-color:white ;
    border-radius: 50px;
    margin-top: 20px;
    display: flex;
    font-family: "poppins","";
    position: fixed;
    z-index: 999;
    position: relative;
    position: absolute;
}
.container a{
    text-decoration: none;
    color: black;

}
.container .container_logo{
    width:40% ;
    height: 100%;
   
    padding: 8px;
}
#contain .container .container_logo  .n{
    height: 100%;
    width: 75%;
    object-fit: contain;
}
.container .container_menu{
    width:60% ;
    height: 100%;
    padding: 15px;
    display: flex;
    justify-content:center;
    align-items: center;
    
    

}
.container .container_menu a p{
    font-size: 16px;
    font-weight: 400;
    padding: 17px;
    border-radius: 25px;
    display: flex;
    transition: ;
}
.container .container_menu a:hover p{
   border: 1PX rgb(255,115,0) solid ;
   display: flex;
   transition: ;
   padding: 10px;
   
    
}
.container .container_search{
    width: 30%;
    display: flex;
    align-items: center;
    justify-content: center;
    border-radius: 15px;
}
.container .container_search input{
    border-radius: 25px 0 0 25px;
    height: 60%;
    border: none;
    outline: none;
    padding-left: 10px;
    border: 1px solid rgb(255,115,0);
}
.container_search_icon{
    background-color: rgb(255,115,0) ;
    padding: 4.2px;
    padding-right: 10px;
    padding-left: 5px;
    border-radius: 0 15px 15px 0;
    
}
.container_search_icon i {
    color: white;
}
.container .container_icon a{
    width: 10%;
    height: 100%;
    display: flex;
    align-items: center;
    justify-content: center;
    font-size: 25px;
    color: rgb(255,115,0) ;
    margin-left: 10px;
    margin-right: 45px;
}
 .menu_big_img{
    width: 100%;
    object-fit: contain;
    position: relative;
    height: 500px;
}
 .menu_big_img .m{
    width: 100%;
    object-fit:cover;
    height: 500px;
  
}
ul li {
    width: 112px;
    height: 80px;
    background-color: white;
    margin-top: 137px;
    margin-left: -112px;
    display:flex ;
    flex-direction: column;
    justify-content: flex;
    
    display: none;
    

}
.c:hover + ul li{
    display: block;   
}
ul li:hover{
    display: block;   
}
ul li .n{
    
    
    width: 100%;
    height: 50%;
    
    display: flex;
    align-items: center;
    justify-content: center;
    transition: 0.8s;
    
    
}
ul li .m{ 
    transition: 0.8s;
    width: 100%;
    height: 50%;
    
    display: flex;
    align-items: center;
    justify-content: center;
    
}
ul li .n:hover{
   background-color: rgb(255,115,0) ;
   transition: 0.8s;
}
ul li .m:hover{
    background-color: rgb(255,115,0) ;
    transition: 0.8s;
}