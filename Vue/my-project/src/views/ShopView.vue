<template>
    <div class="container">

        <!-- <h2>This is a Shop Page</h2>
        <p><router-link :to="{name:'shopdetail', params:{id:'1'}}">Item one</router-link></p>
        <p><router-link :to="{name:'shopdetail', params:{id:'2'}}">Item two</router-link></p> -->
    </div>
    <div class="row" v-if="products.length>0">
    <!-- to put :key attr while looping -->
        <div class="col-lg-3 col-md-4 col-sm-6 col-12" v-for="(product,index) in products" :key="index"> 
            <div class="card my-3" >
            <img :src="product.image" class="card-img-top w-25 mx-auto p-3" alt="">
            <div class="card-body">
                <h5 class="card-title"> $ {{product.price}}</h5>
                    <p class="card-text">{{product.title}}</p>
                    <div class="d-flex justify-content-between">
                     <router-link :to="{name:'shopdetail', params:{id:product.id}}">                       
                        <button class="btn btn-primary ">View</button>
                        </router-link>
                        <button class="btn btn-warning">Add To Cart</button>
                        </div>    
                    </div>
                </div>
            </div>
        </div>
    </template>
<script>
    const axios = require('axios').default;
    export default {
        name:'ShopView',
        data(){
            return{
                products:[],
            }
        },
        mounted(){
            this.getAllProducts();
        },
        methods:{
            getAllProducts(){
                axios.get('https://fakestoreapi.com/products')
                    .then(response =>{ 
                    // console.log(response)
                    this.products  = response.data
                    })
            }
        }
    }
</script>
<style>

</style>